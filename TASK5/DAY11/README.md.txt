# Day 11 - Mosquitto Local Broker Test

## Overview
Testing MQTT pub/sub using Zelbytes IoT cloud broker
instead of local Mosquitto installation.

## Broker Details
- Broker: careers.zelbytes.com
- Port: 1883
- Topic: zelbytes/lab/92/telemetry
- Node: 92

## What Was Done
1. Verified Mosquitto broker running on Zelbytes cloud
2. Published and received test message via MQTT
3. Confirmed broker reachable via ping test
4. Documented firewall notes (cloud broker, no changes needed)
5. Updated secrets.h template with MQTT broker details

## Checklist
- [x] Mosquitto broker service running
- [x] Local pub/sub works on broker
- [x] Broker reachable from ESP32 subnet
- [x] Firewall rules documented
- [x] MQTT_BROKER documented in secrets.h

## Payload Used
```json
{
  "schema_version": 1,
  "temp_c": 32.7,
  "humidity_pct": 83.6
}
```

## Screenshots
See images/ folder for all proof screenshots.