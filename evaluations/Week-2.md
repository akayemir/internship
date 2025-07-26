# Week 2

## Day 6 

* Started the demo project and decided to use **Node Exporter**
* Integrated **Node Exporter, Prometheus and Grafana** to my project
* Wrote readme files **Binary Search, Factorial and Fibonacci** algorithms


## Day 7

* Learned how to structure my project in terms of what to pull, what to push
* Drew the CPU, Ram graphics in Grafana for local without and push&pull to exercise
* Kept doing research about how to connect the services



## Day 8

* Wrote Node Exporter config files for clients 
* Integrated **OpenTelemetry Collector, Prometheus, Grafana** into the headquarter project to pull Node Exporter client metrics and process them
Node Exporter configuration
```yaml 
#receivers:
#  prometheus:
#    config:
#      scrape_configs:
#        - job_name: 'remote-node-exporters'
#          scrape_interval: 10s
#          static_configs:
#            - targets: ["192.168.1.41:9100"]  # Client 1 IP
#              labels:
#                instance: "Emir Mac"
#            - targets: ["192.168.1.95:9100"]  # Client 2 IP
#              labels:
#                instance: "Windows"
```
docker-compose.yml file:  
```yaml 
version: '3.8'

services:
  otel-collector:
    image: otel/opentelemetry-collector-contrib:latest
    command: ["--config=/etc/otel-collector-config.yaml"]
    volumes:
      - ./otel-collector-config.yaml:/etc/otel-collector-config.yaml
    ports:
      - "4317:4317"
      - "4318:4318"
      - "9464:9464"

  prometheus:
    image: prom/prometheus:latest
    volumes:
      - ./prometheus.yml:/etc/prometheus/prometheus.yml
    ports:
      - "9090:9090"

  grafana:
    image: grafana/grafana:latest
    ports:
      - "3000:3000"
    volumes:
      - ./grafana_data:/var/lib/grafana
  
```
* Project structure
<img width="1674" height="1270" alt="Şema" src="https://github.com/user-attachments/assets/c639b5f2-ed3d-4e92-972c-17b920295b20" />




## Day 9

* Started creating a new Dashboard for this project
* While analyzing the visualizations that i created on Grafana, I realized that the metrics didn't belong to actual PC but Docker's Virtual Machine.
* Learned that Node Exporter works best for Linux systems and for Windows systems Windows Exporter works better
* Set up **Windows Exporter** and pulled metrics from a remote Windows machine via its IP address
  Windows Exporter configuration:  
```yaml 
receivers:
  prometheus:
    config:
      scrape_configs:
        - job_name: 'windows-clients'
          scrape_interval: 10s
          static_configs:
            - targets: ["192.168.93.69:9182"]
              labels:
                instance: "windows-exporter"
            - targets: ["172.31.99.166:9182"]
              labels:
                instance: "test-PC"
```


## Day 10

* Removed default Windows Exporter on client PC and downloaded it again with custom setting for more advanced metrics
* Added more visualizations to the Dashboard
  Dashboard:
  <img width="1356" height="549" alt="Ekran Resmi 2025-07-24 23 04 24" src="https://github.com/user-attachments/assets/16e2df02-04e7-4e4e-a20a-0d102b937c65" />
* Updated **SMTP** configuration in grafana.ini for Email alerts
  SMTP configuration:
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
