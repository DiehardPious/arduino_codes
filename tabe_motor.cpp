#include "tabe_motor.h"
void motor(int a, int b) {
  int MLP = 5;
  int MLN = 6;
  int MRP = 10;
  int MRN = 11;
  if (a > 0) {
    analogWrite(MLP, a);
    analogWrite(MLN, 0);
  }
  if (a <= 0) {
    analogWrite(MLP, 0);
    analogWrite(MLN, (-1) * a);
  }
  if (b > 0) {
    analogWrite(MRP, 0);
    analogWrite(MRN, 0);
  }
  if (b <= 0) {
    analogWrite(MRP, 0);
    analogWrite(MRN, (-1)*b);
  }
}