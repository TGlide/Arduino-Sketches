#include <LiquidCrystal.h>

int dt = 1000;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  
}

void loop() {
  lcd.print("Introducao ");
  delay(dt);
  lcd.clear();
  lcd.print("a ");
  delay(dt);
  lcd.clear();
  lcd.print("microcontrolador ");
  delay(dt);
  lcd.clear();
  lcd.print("UFF");
  delay(dt*3);
  lcd.clear();
}
