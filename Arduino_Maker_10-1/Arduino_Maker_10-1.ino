#include <LiquidCrystal.h>

LiquidCrystal lcd(2,4,8,9,10,11);
void setup() {
  lcd.begin(16,2);
  lcd.print("Hello, Arduino!!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
