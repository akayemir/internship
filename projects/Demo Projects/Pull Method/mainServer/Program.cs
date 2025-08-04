using OpenTelemetry.Metrics;
using OpenTelemetry.Resources;
using System.Diagnostics.Metrics;
using OpenTelemetry.Exporter;

var builder = WebApplication.CreateBuilder(args);

builder.Services.AddOpenTelemetry()
    .ConfigureResource(resource => resource.AddService("my-dotnet-service"))
    .WithMetrics(metrics =>
    {
        metrics
            .AddAspNetCoreInstrumentation()     //In case if the performance of the web application is wanted to be monitored.
            .AddHttpClientInstrumentation()
            .AddRuntimeInstrumentation()
            .AddProcessInstrumentation()
            .AddMeter("MyAppMetrics")
            .AddOtlpExporter(options =>
            {
                options.Endpoint = new Uri("http://localhost:4318");
            });
    });

var app = builder.Build();

var meter = new Meter("MyAppMetrics");
var counter = meter.CreateCounter<long>("my_custom_counter");

app.MapGet("/", () =>
{
    counter.Add(1);
    return "Hello from OpenTelemetry!";
});

app.Run();
