/*
Statement   	:   To connect ESP8266 Witty Cloud Development Board to WiFi and print IP address of the n/w.
*/

#include <ESP8266WiFi.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  WiFi.begin("SSID","PASSWORD"); // ssid and password
  while(WiFi.status()!=WL_CONNECTED){ // Connect to wifi network
    Serial.print(".");
    delay(200);
  }
  Serial.println("Wifi Connected");
  Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:

}
