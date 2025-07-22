# Day 8 – Configuring Pulling

## ✅ Objectives
- [x] Wrote config files for **clients** which is basically a **Node Exporter** container 
- [x] I integrated **OpenTelemetry Collector** into the headquarter project to pull Node Exporter client metrics
- [x] Integrated **Prometheus** into the headquarter project to pull Open Telemetry metrics
- [x] Integrated **Grafana** into the headquarter project to visualize Prometheus metrics
<img width="1674" height="1270" alt="Şema" src="https://github.com/user-attachments/assets/536a9a65-d08a-4d72-8013-7044deeddda3" />



## 📘 What I Learned

* Learned how to pull metrics from another ip adresses (not localhost)

## ❓ Questions
When I run Node Exporters, everyone who has ip adresses can pull the metrics. How can I create a security system so only the headquarter project can access it?

## 💬 Reflection
I need to make it easier for people to setup and use, instead of make them struggle with Docker and IDEs.
