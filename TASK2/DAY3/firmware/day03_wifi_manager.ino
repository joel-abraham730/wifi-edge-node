#include <WiFi.h>
#include "secrets.h"
int retryCount = 0;
void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("========================");
  Serial.println(" Day 03 - WiFi Connect");
  Serial.println("========================");
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting to: ");
  Serial.println(WIFI_SSID);
  unsigned long startTime = millis();
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    // Timeout after 15 seconds
    if (millis() - startTime > 15000) {
      Serial.println("\nFailed to connect within 15s!");
      return;
    }
  }
  Serial.println("\nConnected! ✓");
  printNetworkInfo();
}
void printNetworkInfo() {
  Serial.println("========================");
  Serial.print("IP Address : ");
  Serial.println(WiFi.localIP());
  Serial.print("RSSI : ");
  Serial.print(WiFi.RSSI());
  Serial.println(" dBm");
  Serial.print("Channel : ");
  Serial.println(WiFi.channel());
  Serial.print("MAC Address: ");
  Serial.println(WiFi.macAddress());
  Serial.println("========================");
}
void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    retryCount++;
    int backoff = min(1000 * (1 << retryCount), 16000);
    Serial.print("WiFi lost! Retry ");
    Serial.print(retryCount);
    Serial.print(" in ");
    Serial.print(backoff / 1000);
    Serial.println("s...");
    delay(backoff);
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    unsigned long startTime = millis();
    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
      if (millis() - startTime > 15000) {
        Serial.println("\nRetry timed out.");
        return;
      }
    }
    Serial.println("\nReconnected! ✓");
    retryCount = 0;
    printNetworkInfo();
  } else {
    retryCount = 0;
    delay(3000);
  }
}
