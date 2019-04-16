int servoTable[] = {
  600,
  1200,
  1800,
  2400
};

int inc = 1;
int idx = 0;
int totalPos = 4;

int pos = servoTable[idx];

int servoPin = 9;
int pulseInterval=20;
int pulseCount=0;
int pulseTimes=50;

void setup() {
  Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
  pinMode(servoPin, OUTPUT);
}

void loop() {
  int i;

  pulseCount++;
  if (pulseCount == pulseTimes) {
    pulseCount = 0;
    idx += inc;
    pos = servoTable[idx];

    if (idx == 3) {
    pos = servoTable[totalPos-1];
    inc = -1;
  } else if (idx <= 0) {
    pos = servoTable[0];
    inc = 1;
  }

  Serial.print("pos = ");
  Serial.println(pos, DEC);
  }

  digitalWrite(servoPin, HIGH);
  delayMicroseconds(pos);
  digitalWrite(servoPin, LOW);
  delay(pulseInterval);
  
  }
