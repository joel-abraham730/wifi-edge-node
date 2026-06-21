# Day 20 - Field Deployment Package

## Overview
Produced field deployment checklist, WiFi RSSI survey, 
soak test log and rollback runbook for polyhouse ESP32 nodes.

## Soak Test Results
- Uptime: 0.4h
- MQTT Reconnects: 3
- DHT Failures: 0
- HTTP Failures: 0
- Min RSSI: -66 dBm
- Starting RSSI: -54 dBm

## WiFi RSSI Survey
- Install height reading: -54 dBm (good signal)
- Minimum recorded: -66 dBm (acceptable)
- Recommendation: Keep node within 5m of router

## Files
- firmware/day20_soak_metrics.ino - Soak test sketch
- docs/deployment_checklist.md - 20+ item field checklist
- docs/soak_test_log.md - Soak test results
- docs/rollback_runbook.md - Rollback procedure
- docs/wifi_rssi_survey.md - WiFi signal survey
- images/ - Serial monitor screenshots and install photo