# Pull Method based OpenTelemetry Project

## 🧾 Summary

This repository demonstrates a **pull-based monitoring architecture** using OpenTelemetry, Prometheus, and Grafana. The project showcases how metrics can be collected using the OpenTelemetry Collector and then scraped by Prometheus for visualization in Grafana.

The setup includes:
- Node-level exporters running on client machines
- A central server running OpenTelemetry Collector, Prometheus, and Grafana
- Pull-based metric flow from exporters to collector, then to Prometheus

<img width="1674" height="1270" alt="Şema" src="https://github.com/user-attachments/assets/20a76ad7-2bdd-4a1d-879f-b0984baa9be0" />
  
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
- When WindowsExporter is downloaded, it should be working in the background as an agent all the time. However, if Windows Defender Firewall prevents you to pull metrics, follow these steps:
  
  🔧 **Open Port 9182 for Windows Exporter**

- Go to Start > type "Windows Defender Firewall" and open it.
- In the left panel, click "Advanced settings".
- In the new window (Windows Defender Firewall with Advanced Security), click "Inbound Rules" > then click "New Rule..." on the right.
- Rule Type: Select Port, then click Next.
  Protocol and Ports:
  Select TCP
  Enter 9182 in the Specific local ports field
- Click Next
- Action: Choose "Allow the connection", then click Next.
- Profile: Make sure all are checked:
  ✓ Domain
  ✓ Private
  ✓ Public
- Then click Next
- Name: Enter a name like:
  Windows Exporter Port 9182
- Then click Finish

- After these steps your client side is ready to use.


### 2. Start Collector + Prometheus + Grafana (Headquarter Side)

- After downloading the **mainServer** file, configure IP adresses from `otel-collector-config.yaml` targets: line.
- Run the program with
  ```bash
  dotnet run
  docker compose up -d
  ```
- This will start:  
  OpenTelemetry Collector (receiving metrics via prometheusreceiver)  
  Prometheus (scraping metrics from Collector)  
  Grafana (visualizing metrics)  

### 📊 Accessing Dashboards

- Grafana UI → http://localhost:3000  
  Default login  
    username: admin  
    password: admin  
- Prometheus UI → http://localhost:9090

