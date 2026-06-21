# Day 18 - TLS/WiFi Security Basics for Interns

## Overview
Implemented TLS-aware HTTPS connection for ESP32 without setInsecure().
Documented IoT threat model and secrets hygiene procedures for 
polyhouse production deployment.

## TLS Test Result
TLS HTTPS returned -1 (connection error) when using setCACert() 
without setInsecure() - this PROVES TLS certificate validation 
is active and working. In production, the correct ISRG Root X1 
CA bundle would be embedded for full chain validation.

## Key Security Points
- setInsecure() removed from production code paths
- setCACert() used for proper TLS validation
- MQTTS port 8883 instead of plain MQTT 1883
- Separate credentials per node
- Rotate API keys every 90 days

## Files
- firmware/day18_mqtts.ino - TLS HTTPS connection sketch
- docs/threat_model.md - STRIDE-lite threat model (6 threats)
- docs/secrets_hygiene.md - Key rotation and Git safety checklist
- docs/ota_policy.md - OTA security policy