int pins[] = {13, 12, 11, 10, 9, 8, 7, 6};
int pinsTotal = 8;
int delayTime = 90;
int pinDirection = 1;                // -1: Left 1: Right
int startPin = -1;
int maxPins = 4;

void setup() {
  for (int i = 0; i < pinsTotal; i++){
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i< pinsTotal; i++){
    if (!(i >= startPin && i < startPin + maxPins)) {
      digitalWrite(pins[i], LOW);
    } else{
      digitalWrite(pins[i], HIGH);  
    }
  }

  delay(delayTime);
  if (pinDirection == 1) { 
    if (startPin == pinsTotal - maxPins + 1){
      startPin--;
      pinDirection = -1;
    } else{
      startPin++;
    }
  } else {
    if (startPin == -1) {
      startPin++;
      pinDirection = 1;
    } else {
      startPin--;
    }  
  }
}
