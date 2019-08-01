
#include <LiquidCrystal.h>
const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("    PHYGITAL!!");
  lcd.setCursor(1, 1);
  lcd.print("At great Cost,Yes!!");

}

void loop() {
  lcd.setBacklight(HIGH);
  lcd.scrollDisplayLeft();
  lcd.autoscroll();
  lcd.print("");
  delay(300);

 lcd.setBacklight(LOW);
 delay(500);
}
