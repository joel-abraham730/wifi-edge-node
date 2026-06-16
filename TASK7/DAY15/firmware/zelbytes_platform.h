// include/zelbytes_platform.h - FUTURE: careers.zelbytes.com (not yet live)
#pragma once

// Uncomment when Zelbytes IoT API launches on careers portal:
// #define ZELBYTES_PLATFORM 1

#ifdef ZELBYTES_PLATFORM
  #define ZELBYTES_HTTP_URL  "https://careers.zelbytes.com/api/v1/iot/telemetry"
  #define ZELBYTES_MQTT_HOST "careers.zelbytes.com"
  #define ZELBYTES_MQTT_PORT 8883
  // DEVICE_TOKEN from careers.zelbytes.com device registration UI
#else
  #define ZELBYTES_HTTP_URL  "https://careers.zelbytes.com/api/iot-lab/v1/telemetry"
  #define ZELBYTES_MQTT_HOST MQTT_BROKER  // local Mosquitto from Day 11
  #define ZELBYTES_MQTT_PORT 1883
#endif

class CloudTransport {
 public:
  virtual bool publishTelemetry(const String& json) = 0;
};

// ZelbytesTransport: HTTPClient POST + PubSubClient - implement when API live