// src/day07_iot_lab.ino
#include <WiFi.h>
#include <HTTPClient.h>
#include <WiFiClientSecure.h>
#include <DHT.h>
#include "secrets.h"

#define DHT_PIN 4
#define DHT_TYPE DHT22
DHT dht(DHT_PIN, DHT_TYPE);

const char* API_BASE = "https://careers.zelbytes.com/api/iot-lab/v1";

bool postZelbytesTelemetry(const char* deviceId, float tempC, float humidityPct) {
  if (WiFi.status() != WL_CONNECTED) return false;
  WiFiClientSecure client;
  client.setInsecure();
  HTTPClient http;
  if (!http.begin(client, String(API_BASE) + "/telemetry")) return false;
  http.addHeader("Content-Type", "application/json");
  http.addHeader("X-Iot-Lab-Key", IOT_LAB_KEY);
  String body = "{\"device_id\":\"" + String(deviceId) + "\""
    ",\"temperature_c\":" + String(tempC, 1)
    + ",\"humidity_pct\":" + String(humidityPct, 1) + "}";
  int code = http.POST(body);
  String resp = http.getString();
  http.end();
  Serial.printf("IoT Lab HTTP %d: %s\n", code, resp.c_str());
  return code == 202 || code == 200;
}

void setup() {
  Serial.begin(115200);
  dht.begin();
  delay(2000);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) delay(200);
  Serial.println("WiFi connected");
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  if (!isnan(t) && !isnan(h)) {
    postZelbytesTelemetry("polyhouse-node-01", t, h);
  } else {
    Serial.println("DHT read failed");
  }
  delay(60000);
}