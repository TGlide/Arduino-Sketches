int redPin = 13;                  // Red LED connected to digital pin 12
int yellowPin = 12;                // Green LED connected to digital pin 11
int greenPin = 11;
int delay_time = 650;

void setup()                      // run once, when the sketch starts
{
  pinMode(redPin, OUTPUT);        // sets the digital pin as output
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);      // sets the digital pin as output
}

void loop()                       // run over and over again
{
  digitalWrite(redPin, HIGH);     // sets the Red LED on
  delay(delay_time);                     // waits for half a second
  digitalWrite(yellowPin, HIGH);      // sets the Red LED off
  delay(delay_time);                     // waits for half a second
  digitalWrite(greenPin, HIGH);
  delay(delay_time);
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
    
  for (int i = 0; i < 4; i++){
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, HIGH);
    delay(delay_time/2);
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
    delay(delay_time/2);
    }
}
