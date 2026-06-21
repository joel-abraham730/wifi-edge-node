# Day 22 - Capstone: WiFi Edge Node

## Overview
Complete end-to-end IoT edge node integrating all modules 
from Days 1-21. DHT22 sensor publishes to Zelbytes IoT Lab 
via both MQTT and HTTPS with NVS config management, 
command handling and soak metrics logging.

## Results
- MQTT publish: HTTP 202 confirmed
- HTTPS POST: HTTP 202 confirmed
- DHT22 failures: 0
- HTTP failures: 0
- MQTT reconnects: tracked
- Uptime: 0.5h+ logged

## Features Integrated
- DHT22 with 3-retry error handling
- JSON SensorBundle schema v1
- MQTT publish via Zelbytes bridge
- HTTPS POST to IoT Lab API
- MQTT command handler (IRRIGATE/STOP/set_interval)
- NVS config persistence
- Soak metrics (uptime, failures, RSSI)
- WiFi auto-reconnect

## Commands (via Serial Monitor)
- set_interval → update sample interval
- IRRIGATE → valve open
- STOP → valve close
- dump_config → show current config

## Files
- firmware/capstone_polyhouse_node.ino - Complete capstone firmware
- firmware/secrets.template.h - Redacted credentials
- docs/CAPSTONE.md - Architecture diagram
- docs/soak_log.md - 2h deployment log
- images/ - Serial monitor + dashboard screenshots