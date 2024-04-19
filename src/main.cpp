#include <Wire.h>
#include <WiFi.h>
#include <PubSubClient.h>
const char* ssid     = "Wokwi-GUEST";
const char* password = "";

// MQTT Broker
const char* mqtt_server = "bdfc6e7f38564239bb84934a43c3abff.s1.eu.hivemq.cloud";

WiFiClient espClient;
PubSubClient client(espClient);

void setup_wifi() {
  delay(10);
  // Connect to WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  unsigned long startTime = millis();
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    if (millis() - startTime > 5000) {  // 5 seconds timeout
      Serial.println("Failed to connect to WiFi.");
      return;
    }
  }
  
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

