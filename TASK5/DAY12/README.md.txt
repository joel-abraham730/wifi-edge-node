# Day 12 - ESP32 MQTT Publish (sensor/telemetry)

## Overview
Connected ESP32 to Zelbytes IoT Lab MQTT broker and published DHT22 sensor data every 60 seconds using HTTPS MQTT publish endpoint.

## Results
- MQTT publish HTTP 202 success
- Messages visible in Zelbytes MQTT message log
- Reconnect working after disconnect
- Payload size under 512 bytes

## Publish Interval
60 seconds minimum between publishes as per polyhouse bench policy.

## Files
- firmware/day12_mqtt_publish.ino - MQTT publish sketch
- firmware/secrets.template.h - Redacted credentials
- docs/mqtt_schema.md - MQTT schema documentation
- images/ - Serial monitor and MQTT log screenshots