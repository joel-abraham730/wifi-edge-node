# Day 21 - Telemetry Dashboard Wireframe

## Overview
Designed polyhouse fleet monitoring dashboard wireframe 
showing live telemetry, node online/offline status via 
MQTT LWT, alert badges for out-of-range humidity, 
and 24h charts. Includes mobile layout for farm managers.

## Dashboard Features
- Fleet list showing all nodes with status
- Node detail view with temp/humidity metrics
- Alert badges for out-of-range values
- LWT offline detection for node-03
- 24h chart placeholders linked to Zelbytes API
- Mobile responsive layout (375px)

## Alert Thresholds (Mushroom Polyhouse)
- Temperature: 24-30°C (alert outside range)
- Humidity: 85-92% (alert outside range)
- WiFi RSSI: > -70 dBm
- Node offline: LWT triggered

## Data Sources
- Node status: MQTT LWT zelbytes/lab/{node}/status
- Latest readings: GET /telemetry/latest
- 24h charts: GET /telemetry/series?limit=24

## Files
- dashboard/dashboard.html - Fleet dashboard wireframe
- docs/data_binding.md - Widget to API mapping
- docs/alert_thresholds.md - Alert threshold specification
- images/ - Desktop and mobile screenshots