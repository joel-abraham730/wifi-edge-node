// src/day06_ota.ino
#include <WiFi.h>
#include <ArduinoOTA.h>
#include "secrets.h"

const char* OTA_HOST = "polyhouse-node-01";
const char* OTA_PASS = "zelbytes-lab-ota";

void setupOta() {
  ArduinoOTA.setHostname(OTA_HOST);
  ArduinoOTA.setPassword(OTA_PASS);
  ArduinoOTA.onStart([]() { Serial.println(F("OTA start")); });
  ArduinoOTA.onProgress([](unsigned int p, unsigned int t) {
    Serial.printf("OTA progress: %u%%\r", (p * 100) / t);
  });
  ArduinoOTA.onEnd([]() { Serial.println(F("\nOTA end")); });
  ArduinoOTA.onError([](ota_error_t e) {
    Serial.printf("OTA error[%u]\n", e);
  });
  ArduinoOTA.begin();
  Serial.printf("OTA ready: %s.local\n", OTA_HOST);
}

void setup() {
  Serial.begin(115200);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) delay(200);
  setupOta();
}

void loop() {
  ArduinoOTA.handle();
  delay(10);
}

// Deep sleep snippet (used Day 22):
// esp_sleep_enable_timer_wakeup(55 * 1000000ULL);
// esp_deep_sleep_start();
