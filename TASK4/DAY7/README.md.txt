# Day 7 - Zelbytes IoT Lab HTTPS Telemetry

## Overview
Posted DHT22 temperature and humidity data to Zelbytes IoT Lab every 60 seconds using HTTPS POST with X-Iot-Lab-Key authentication.

## Results
- HTTP 202 success confirmed
- Invalid key returns 403 error
- Dashboard shows live temperature and humidity charts

## Files
- firmware/day07_iot_lab.ino - Main HTTPS telemetry sketch
- firmware/secrets.h.example - Redacted credentials template
- docs/IOT_LAB.md - Field mapping and portal URL
- images/ - Screenshots of dashboard and serial monitor