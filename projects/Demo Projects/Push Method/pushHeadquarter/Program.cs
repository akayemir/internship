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
            .AddAspNetCoreInstrumentation()
            .AddHttpClientInstrumentation()
            .AddRuntimeInstrumentation()
            .AddProcessInstrumentation()
            .AddOtlpExporter(options =>
            {
                options.Endpoint = new Uri("http://localhost:4317"); // OTel Collector
            });
    });

var app = builder.Build();

app.Run();
