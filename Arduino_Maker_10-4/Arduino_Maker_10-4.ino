#include <LiquidCrystal.h>

LiquidCrystal lcd(2,4,8,9,10,11);
void setup() {
  lcd.begin(16,2);
}

void loop() {
    lcd.print("This is the first trial of text scroll.");
  delay(1000);
  lcd.setCursor(16,1);
  lcd.autoscroll();
  for (int i=10; i<30; i++)
  {
    lcd.print(" ");
    delay(400);
  }
  lcd.noAutoscroll();
  lcd.clear();
}
