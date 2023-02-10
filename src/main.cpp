#include <Arduino.h>

const int led = 2;

const int pir = 14;

void setup() {
  Serial.begin(9200);
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT);
  digitalWrite(led, LOW);
}

void loop() {
  
  if (digitalRead(pir) == LOW){
    Serial.println("no detecto movimiento");
    digitalWrite(led,LOW);
  }
  if (digitalRead(pir) == HIGH){
    Serial.println("detecto movimiento");
    digitalWrite(led,HIGH);
  }
  delay(1000);
}