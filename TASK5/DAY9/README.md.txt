# Day 9 - Reading Zelbytes IoT Lab Latest & Series

## Overview
Read telemetry data back from Zelbytes IoT Lab using GET requests.
Parsed latest temperature and humidity values and historical series data.

## Results
- Latest temp: 32.7°C, humidity: 83.6%
- Series data shows historical readings by timestamp
- Polling interval: every 30 seconds

## Polling Interval
ESP32 polls every 30 seconds. For faster updates use MQTT push instead of HTTP polling.

## Files
- firmware/day09_read_lab.ino - Read API sketch
- docs/polling_vs_mqtt.md - Polling vs MQTT notes
- images/ - Serial monitor and API Explorer screenshots