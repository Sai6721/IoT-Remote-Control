#include <WiFi.h>

const char* ssid = "YourWiFiName";
const char* password = "YourWiFiPassword";

const int LED_PIN = 2;

void setup() {
  pinMode(LED_PIN, OUTPUT);

  Serial.begin(9600);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting...");
  }

  Serial.println("Connected to WiFi");
}

void loop() {

  WiFiClient client;

  if (client.connect("io.adafruit.com", 80)) {

    client.println("GET /api/v2/YourUsername/feeds/led/data/last HTTP/1.1");
    client.println("Host: io.adafruit.com");
    client.println("X-AIO-Key: YourAdafruitIOKey");
    client.println("Connection: close");
    client.println();

    String response = "";

    while (client.available()) {
      response += client.readString();
    }

    if (response.indexOf("\"value\":\"1\"") >= 0) {
      digitalWrite(LED_PIN, HIGH);
    } else {
      digitalWrite(LED_PIN, LOW);
    }
  }

  delay(10000);
}