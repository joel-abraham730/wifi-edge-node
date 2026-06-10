# Day 1 - WiFi Edge Node Board Selection

## Board chosen
Board: DOIT ESP32 DEVKIT V1
Chip: ESP32 WROOM-32D
Chip Model: ESP32-D0WD-V3 rev 301
Cores: 2
Flash: 4194304 bytes

## Why ESP32 over ESP8266

### Performance
- Dual core processor (240MHz) vs ESP8266 
  single core (80MHz)
- 520KB RAM vs ESP8266 only 80KB RAM
- Handles WiFi and sensor reading 
  simultaneously without crashing

### Connectivity
- Native BLE support for future Bluetooth 
  sensor integration
- WiFi 802.11 b/g/n same as ESP8266
- More stable WiFi connection for 24/7 
  polyhouse monitoring

### GPIO and ADC
- 34 GPIO pins vs ESP8266 only 17 pins
- 18 ADC channels vs ESP8266 only 1 ADC
- Can connect CO2, DHT22, humidity sensors 
  simultaneously

### Reliability
- More stable for continuous 24/7 monitoring
- Better suited for polyhouse mushroom 
  cultivation where readings must reach 
  cloud even when one sensor glitches
- Dual core ensures WiFi never blocked 
  by sensor reading

### Future Expansion
- BLE for wireless sensor communication
- More pins for additional sensors Days 7-22
- Better memory for MQTT and cloud protocols

## Verification
- Blink sketch uploaded successfully
- Serial monitor confirmed board identity
- LED blinking on GPIO 2
- Board ready for DHT22 wiring on Day 5
