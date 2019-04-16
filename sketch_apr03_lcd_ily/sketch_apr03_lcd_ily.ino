#include <LiquidCrystal.h>

int dt = 300;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  
}

void loop() {
  lcd.print("I ");
  delay(dt);
  lcd.print("love ");
  delay(dt);
  lcd.print("you!");
  delay(dt);
  lcd.print(" <3");
  delay(dt*3);
  lcd.clear();
  delay(100);
}
