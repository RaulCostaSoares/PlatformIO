#include <Arduino.h>

void setup() {

  pinMode(13, OUTPUT);
  pinMode(6, OUTPUT);
}


void loop() {

  digitalWrite(13, HIGH); 
  analogWrite(6, 255);  
  delay(5);

  digitalWrite(13, LOW);  
  analogWrite(6, 0);   
  delay(5);             
}
