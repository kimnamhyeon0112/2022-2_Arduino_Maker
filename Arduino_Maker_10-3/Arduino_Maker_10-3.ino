#include <LiquidCrystal.h>

LiquidCrystal lcd(2,4,8,9,10,11);
void setup() {
  lcd.begin(16,2);
  lcd.print("This is the first trial of text scroll.");
  delay(1000);
}

void loop() {
  lcd.scrollDisplayLeft();
  delay(400);
}
