# Day 8 - JSON Payload Design for Sensor Bundles

## Overview
Designed structured SensorBundle JSON schema using ArduinoJson. Serialized and deserialized sensor data with validation and size checking.

## Results
- Payload size: 173 bytes (under 512 bytes)
- Round-trip serialize/deserialize working
- Invalid bundle rejection working
- HTTP 202 success confirmed

## Files
- firmware/day08_sensor_bundle.ino - SensorBundle sketch
- docs/payload_schema_v1.json - JSON schema documentation
- images/ - Serial monitor screenshots