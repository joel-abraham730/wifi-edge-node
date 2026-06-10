# WiFi Provisioning Options

## Current Method
Hard-coded credentials in secrets.h 
(gitignored) - acceptable for lab week.

## Provisioning Options Comparison

### SmartConfig
- Phone app sends SSID/password over air
- No web interface needed
- Works without knowing IP address
- Good for mass deployment
- Drawback: requires specific app

### Captive Portal
- ESP32 creates temporary hotspot
- User connects and enters credentials
- Browser-based - no app needed
- More user friendly
- Used in production deployments
- Drawback: requires AP mode temporarily

## Recommended for Polyhouse
Captive portal is better for polyhouse 
deployment because:
- Field technicians don't need special app
- Works with any phone browser
- More reliable in farm environment

## Future Plan
Day 19 will implement NVS-based config 
for storing credentials permanently.
