#include <Servo.h>

Servo servo;

int degreeTable[] = {
  B0,
  B111100,
  B1111000,
  B10110100
  };

int degreeIndex = 0;
int degreeTotal = 4;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
  servo.write(B0);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo.write(degreeTable[degreeIndex]);
  delay(1000);
  degreeIndex = (degreeIndex+1)%degreeTotal;
  Serial.print(degreeIndex);
}
