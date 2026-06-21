# Day 19 - Edge Node Configuration Management

## Overview
Implemented NVS (Non Volatile Storage) configuration management 
for ESP32 polyhouse nodes. Config persists across reboots and 
power cycles. Factory reset clears NVS and enters provisioning mode.

## Results
- Config loaded from NVS on every boot
- set_interval command saves to NVS and survives power cycle
- Factory reset clears all config and restarts
- dump_config prints non-secret fields to serial

## Commands
- dump_config - prints all non-secret config fields
- set_interval:XX - updates sample interval and saves to NVS
- factory_reset - clears NVS and restarts in provisioning mode

## Files
- firmware/day19_config.ino - NVS config management sketch
- firmware/secrets.template.h - Redacted credentials
- docs/config_schema.md - Config JSON schema and defaults
- docs/deploy.md - Deployment and provisioning guide
- images/ - Serial monitor screenshots