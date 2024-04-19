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
  
    }
  }

