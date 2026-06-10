# Day 4 - NTP Time Sync & Timestamps

## Overview
Implemented NTP time synchronization for 
ESP32 polyhouse edge node. ESP32 has no 
battery-backed RTC so it syncs time via 
NTP after WiFi connects.

## NTP Configuration
- NTP Server: pool.ntp.org
- Timezone: IST (UTC+5:30)
- GMT Offset: 19800 seconds
- Daylight Offset: 0

## Features Implemented
1. NTP sync within 10 seconds after WiFi connect
2. Serial prints correct IST local time
3. isoTimestamp() returns ISO-8601 formatted string
4. Time sync integrated with Day 3 WiFi connection
5. Fallback returns 1970-01-01T00:00:00Z if sync fails

## Verification
- NTP sync successful 
- Time: 2026-06-07 19:35:05
- isoTimestamp: 2026-06-07T19:35:05
- valid: yes
- Verified against phone clock 
