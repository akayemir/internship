# Week 1

## Day 1 

* I set up my GitHub internship repository.
* I started learning about monitoring. Researched the differences between **Logging, Tracing and Metrics**.
* Wrote codes of **Binary Search, Recursive Factorial, Recursive Fibonacci** algorithms.
* Downloaded Docker to get ready to create my first project with Prometheus and Grafana.


## Day 2

* I set up Prometheus and Grafana using Docker.  

docker-compose.yml file:  
```yaml 
version: '3.7'

services:
  prometheus:
    image: prom/prometheus
    volumes:
      - ./prometheus.yml:/etc/prometheus/prometheus.yml
    ports:
      - "9090:9090"

  grafana:
    image: grafana/grafana
    ports:
      - "3000:3000"
```  
prometheus.yml file:  
```yaml 
global:
  scrape_interval: 15s

scrape_configs:
  - job_name: 'prometheus'
    static_configs:
      - targets: ['prometheus:9090']
```
* Created some graphs on Grafana to get to know about it.
* Started researching OpenTelemetry and .NET
* Wrote a **QuickSort** algorithm code.


## Day 3

* Created a .NET project and integrated OpenTelemetry, Prometheus and Grafana.  
OpenTelemetry configuration with Prometheus in Program.cs file:  
```yaml 
builder.Services.AddOpenTelemetry()
    .WithMetrics(metrics =>
    {
        metrics
            .AddAspNetCoreInstrumentation()
            .AddHttpClientInstrumentation()
            .AddPrometheusExporter();
    });
```
prometheus.yml file:  
```yaml 
global:
  scrape_interval: 15s

scrape_configs:
  - job_name: 'weatherapi'
    static_configs:
      - targets: ['host.docker.internal:5164']
    scrape_interval: 5s
    metrics_path: '/metrics'
```
Created new graphs in Grafana to visualize the metrics that Prometheus collected.
<img width="3018" height="1476" alt="image" src="https://github.com/user-attachments/assets/ad82297e-b671-4f35-a83a-e5af929aa537" />



## Day 4

* Defined a custom metric. (Temperature Prediction)  
  New meter configuration in Program.cs file:  
```yaml 
List<Measurement<double>> observedTemperatures = new();

var meter = new Meter("WeatherMetrics");
var temperatureGauge = meter.CreateObservableGauge(
    "weather_temperature_daily",
    () => observedTemperatures,
    unit: "C",
    description: "Günlük sıcaklık değerleri"
);
```
* Added this metric to OpenTelemetry configuration:
```yaml 
builder.Services.AddOpenTelemetry()
    .WithMetrics(metrics =>
    {
        metrics
            .AddAspNetCoreInstrumentation()
            .AddHttpClientInstrumentation()
            .AddMeter("WeatherMetrics")         //This Line
            .AddPrometheusExporter();
    });
```
* Added this metric to my Grafana Dashboard.
<img width="3018" height="1476" alt="image" src="https://github.com/user-attachments/assets/0750be52-4f53-4236-8ebe-92a3feac6d9c" />

* Modified grafana.ini file to set up SMTP and alert rules on Grafana
```ini 
[smtp]
enabled = true
host = smtp.gmail.com:587
user = testspamfakemail@gmail.com
# If the password contains # or ; you have to wrap it with triple quotes. Ex """#password;"""
password = """wqbilubujiovmmqf"""
cert_file =
key_file =
skip_verify = false
from_address = testspamfakemail@gmail.com
from_name = Grafana Alert
```
* Sent alerts via emails
<img width="1810" height="1518" alt="image" src="https://github.com/user-attachments/assets/3dc13d55-7454-475a-9761-b2c8e1811e94" />


## Day 5

* Returned back to algorithms and wrote codes of **phonebook Hash Table, maze BFS, shortest path Dijkstra, money exhange Greedy** algorithms.
* Started doing research about APIs and fetching data from external APIs to use on my demo project.

