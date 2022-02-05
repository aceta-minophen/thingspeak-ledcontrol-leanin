#include "ESP8266WiFi.h"
#include "ThingSpeak.h"

const char* ssid = "paya1"; // Write here your router's username
const char* password = "naina123"; // Write here your router's passward

unsigned long myChannelNumber = 1;
const char * myWriteAPIKey = "WXYBG42UPC56AK4E";

WiFiClient client;

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

  ThingSpeak.begin(client);
}

void loop() {
  //Serial.println("Hello World");
 
 
  for(int i=0; i<=10; i++){
    ThingSpeak.writeField(myChannelNumber, 1, i, myWriteAPIKey);
    delay(7000);
  }
}
