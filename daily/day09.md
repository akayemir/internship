# Day 9 – Changing Node Exporter to Windows Exporter

## ✅ Objectives
- [x] Started creating a Dashboard on Grafana
- [x] While building visualizations on Grafana, noticed that Node Exporter was returning Docker's VM's metrics intead of the actual host. So I changed Node-Exporter to **Windows Exporter**.
- [x] Downloaded and configured Windows Exporter on the client machine, and updated OpenTelemetry Collector settings accordingly
- [x] Successfully pulled metrics from a remote Windows machine via its IP address
- [x] Created a new dashboard and began building visualizations using the new Windows metrics


## 📘 What I Learned

* Learned **Node Exporter** is mainly designed for **Linux-based** systems, and to collect actual host metrics on Windows, I need to use **Windows Exporter**

## ❓ Questions
Is there a way to simplify the installation and setup process of Windows Exporter for end users?

## 💬 Reflection
I need to add more visualizations to the Grafana dashboard. Also, I should implement a security layer to ensure that only headquarter systems can access the Windows Exporter metrics.
