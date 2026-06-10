# OTA Policy - Lab vs Production

## Lab Settings
- OTA password: set (zelbytes-lab-ota)
- Network: local WiFi only
- No code signing required

## Production Requirements
- Signed firmware images mandatory
- HTTPS OTA only (esp_https_ota)
- Unique password per device
- OTA disabled during active MQTT commands

## Security Risks
- Unsigned images can be injected on LAN
- Open OTA (no password) rejected
- Rollback partition protects against bad firmware
