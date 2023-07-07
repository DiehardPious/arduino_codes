#include "sensor.h"




void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}
void loop() {
  read_sensor();
}


