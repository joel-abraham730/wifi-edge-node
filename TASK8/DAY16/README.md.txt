# Day 16 — HTTP POST SensorBundle to Zelbytes IoT Lab

## Overview
Implemented HTTP POST telemetry upload from ESP32 to the Zelbytes IoT Lab,
replacing the MQTT-style bridge used in Day 12, and compared the two approaches.

## What Was Done
1. Verified API connectivity via curl from laptop using API key
2. Uploaded ESP32 firmware using HTTPClient + WiFiClientSecure to POST SensorBundle JSON
3. Confirmed 202 response and data visible on IoT Lab dashboard
4. Tested error handling by sending an invalid API key (401), confirmed loop resilience
5. Measured and compared latency: HTTP POST vs MQTT-style bridge POST

## Checklist
-  curl POST from laptop succeeds with API key
-  ESP32 POST returns 202; telemetry visible in IoT Lab
-  401 tested with wrong key — error logged, loop continues
-  Latency comparison table vs MQTT documented
-  docs/IOT_LAB.md documents API base URL and device_id

## Folder Structure
- `docs/` — IOT_LAB.md (API details, latency table, error handling notes)
- `firmware/` — secrets.h template, day16_http_post.ino
- `images/` — verification screenshots

## Note on "MQTT" comparison
The Day 12 MQTT path uses an HTTPS bridge endpoint (`/mqtt/publish`), not a native
MQTT client connection over port 1883. Latency comparisons in docs/IOT_LAB.md
reflect this — see notes there for details.