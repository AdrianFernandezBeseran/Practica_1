#include <Arduino.h>

uint8_t temperature_sense_read();

void setup() {
  Serial.begin(115200);
 pinMode(14,OUTPUT);
 
 
}

void loop() {
  
   digitalWrite(14, HIGH);
  Serial.println("on");  
  delay(1000); 
  digitalWrite(14, LOW);
   Serial.println("off");
  delay(1000);
   Serial.println('Temperatura: ');
   Serial.println((temperature_sense_read()-32)/1.8);
   Serial.println(' C');
}