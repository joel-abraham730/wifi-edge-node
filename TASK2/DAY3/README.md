# Day 3 - WiFi Station Mode & Connection Manager

## Overview
Implemented WiFi STA mode connection manager 
for ESP32 polyhouse edge node with automatic 
reconnection and exponential backoff.

## WiFi Connection Details
- SSID: Connected to lab WiFi
- IP Address: 10.164.159.21
- RSSI: -49 dBm
- Channel: 6
- MAC Address: 00:70:07:1D:25:5C

## Features Implemented
1. WiFi STA mode connection with 15 second timeout
2. Prints IP, RSSI, channel and MAC on connection
3. Exponential backoff retry on disconnect
   - Retry 1: 2s, Retry 2: 4s, Retry 3: 8s, Max: 16s
4. Automatic reconnection when WiFi returns
5. credentials stored in secrets.h (gitignored)

## Test Results
- Connected within 15 seconds ✓
- Disconnect test passed ✓
- Reconnected successfully ✓
