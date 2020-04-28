#include <Arduino.h>

void setup() {
  pinMode(3, OUTPUT);
  pinMode(6, INPUT);
}

//hello this is a comment

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(6)){
    digitalWrite(3, LOW); //aus
  }else{
    digitalWrite(3, HIGH); //ein
  }
}
