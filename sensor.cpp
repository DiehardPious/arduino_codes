#include "sensor.h"
int S0, S1, S2 = 0;
int High_theresold = 900;
int Low_theresold = 300;
int T = (High_theresold + Low_theresold) / 2;


int Sensor_analog_value[8];
int Sensor_digital_value[8];

void read_sensor() {
  for (int i = 0; i <= 7; i++) {
    S0 = i % 2;
    S1 = int(i / 2) % 2;
    S2 = int(int(i / 2) / 2);
    Sensor_analog_value[i] = analogRead(A0);
  }
  for (int i = 0; i < 8; i++) {
    if (Sensor_analog_value[i] > T) {
      Sensor_analog_value[i] = 1;
    } else {
      Sensor_digital_value[i] = 0;
    }
  }
  for (int j = 0; j < 8; j++) {
    Serial.print("D");
    Serial.print("|");

    Serial.print("A");
    Serial.print(":");
    Serial.println();




    Serial.print(Sensor_digital_value[j]);
    Serial.print("|");
    Serial.print(Sensor_analog_value[j]);
    Serial.print("\t");

  }
}
