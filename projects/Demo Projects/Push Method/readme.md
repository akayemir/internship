# Push Method based OpenTelemetry Project

## 🧾 Summary

This repository demonstrates a **push-based monitoring architecture** using OpenTelemetry, Prometheus, and Grafana. The project showcases how metrics can be sent and collected using the OpenTelemetry Collector and then scraped by Prometheus for visualization in Grafana.

The setup includes:
- Node-level exporters and OpenTelemetry running on client machines
- A central server running OpenTelemetry Collector, Prometheus, and Grafana
- Pull-based metric flow from exporters to collector, then to Prometheus

<img width="1943" height="1314" alt="Push Şema" src="https://github.com/user-attachments/assets/fd8926dd-8339-447a-bc1b-79b4c1ebbcf9" />

  
---

## ⚙️ Technologies Used

- **OpenTelemetry Collector**
- **Prometheus**
- **Grafana**
- **Node Exporter (for Linux) / Windows Exporter (for Windows)** 
- **Docker & Docker Compose**

---


## 🚀 Getting Started

### Prerequisites

- [Docker](https://www.docker.com/)
- [Docker Compose](https://docs.docker.com/compose/)

---

## 🖥️ Setup Instructions

### 1. Start Exporter (Client Side)

- Download WindowsExporter. (For more detailed metrics, use custom download and add "cpu,memory,process,logical_disk" (add more if you want)).
- When WindowsExporter is downloaded, it should be working in the background as an agent all the time. 
- After these steps download Docker Desktop.
- Configure the IP adress of the headquarter OpenTelemetry in `otelcol-config.yaml` file's **exporters** section.
- Open `system.bat` file to run the OpenTelemetry on Docker file automatically. 


### 2. Start Collector + Prometheus + Grafana (Headquarter Side)

- Donload **pushHeadquarter** file
- Run the program with
  ```bash
  dotnet run
  docker compose up -d
  ```
- This will start:  
  OpenTelemetry Collector (receiving metrics via station's OpenTelemetry)  
  Prometheus (scraping metrics from Collector)  
  Grafana (visualizing metrics)  

### 📊 Accessing Dashboards

- Grafana UI → http://localhost:3000  
  Default login  
    username: admin  
    password: admin  
- Prometheus UI → http://localhost:9090

