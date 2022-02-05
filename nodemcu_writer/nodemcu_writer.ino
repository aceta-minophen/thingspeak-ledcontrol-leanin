#include "ESP8266WiFi.h"

const char* ssid = "paya1"; // Write here your router's username
const char* password = "naina123"; // Write here your router's passward

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  WiFi.begin(ssid, password);

  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }

  Serial.println("Wifi connected");
  Serial.println(WiFi.localIP());
}

void loop() {
  //Serial.println("Hello World");
}
