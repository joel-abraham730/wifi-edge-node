# Day 5 - DHT22 on ESP32 with Error Handling

## Overview
Wired DHT22 temperature and humidity sensor
to ESP32 with robust error handling, retry
logic and median filter.

## Wiring
- DHT22 + (VCC) -> ESP32 3.3V
- DHT22 out (Data) -> ESP32 GPIO 4
- DHT22 - (GND) -> ESP32 GND
- Pull-up resistor built into module

## Features
1. Reads temperature and humidity every 2 seconds
2. Retries up to 3 times on failed reads
3. Median filter over last 3 samples
4. Logs errors without crashing loop()
5. JSON formatted serial output

## Serial Output
{"temp_c":32.3,"humidity_pct":83.0,"valid":true}

## Verification
- Temperature: 32.3 degrees C
- Humidity: 82.9%
- Error handling verified: valid:false logged
- Median filter verified: breath test showed
  gradual increase to 85.6%