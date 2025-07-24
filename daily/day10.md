# Day 10 – Enriching the Dashboard

## ✅ Objectives
- [x] Received feedback on my Project
- [x] While adding new visualizations on my dashboard, encountered some issues and reconfigured **Windows Exporter** on the client machine
- [x] Added key visualizations to the Dashboard, including:
 * RAM Usage
 * Empty Space in Disk
 * Usage Percentage of Disks
 * Top 5 CPU User apps 
 * Top 5 RAM User apps 
- [x] Updated **SMTP configuraiton** in `grafana.ini` for Email alerts
- [x] Created new alert rules for **CPU Usage, RAM Usage and free disk space**


## 📘 What I Learned

* Default version of Windows Exporter lacks several valuable metrics, custom installation provides more flexibility
* Using `Compose up & down` recreates the containers which can reset certain configurations like `grafana.ini`. So grafana.ini file (SMTP configuration) can be saved locally and intagrated into the code. Or the container can be started from Docker Application itself.

## ❓ Questions
∼

## 💬 Reflection
Even though I can use Grafana without any problem, I could build even more detailed visuals if I knew better.
