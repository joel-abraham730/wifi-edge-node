# Day 6 - OTA Updates Overview (ESP32)

## Overview
Configured ArduinoOTA on ESP32 with hostname 'polyhouse-node-01' and password protection. Successfully uploaded firmware via OTA over WiFi.

## What I Did
- Set partition scheme to Default with OTA
- First flash via USB
- Second upload via OTA Network Port
- Verified OTA progress from 0-100%

## Results
- OTA ready: polyhouse-node-01.local
- OTA upload successful
- Password protected OTA working

## Files
- firmware/day06_ota.ino - Main OTA sketch
- docs/ota_policy.md - OTA security policy
- images/ - Screenshots of OTA process
