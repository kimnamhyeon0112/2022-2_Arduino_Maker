#include <LiquidCrystal.h>

LiquidCrystal lcd(2,4,8,9,10,11);
void setup() {
  lcd.begin(16,2);
  lcd.print("Hello, Arduino!!");
  delay(1000);
}

void loop() {
  for (int i = 0; i< 10; i++)
  {
    lcd.setCursor(i,1);
    lcd.print(i);
    delay(500);
    lcd.clear();
  }
  lcd.setCursor(0,0);
  lcd.clear();
  lcd.print("Reset!!");
  delay(1000);
  lcd.clear();
}
