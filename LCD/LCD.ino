#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
int counter = 0;

void setup() {
  lcd.begin(16, 2);
 //lcd.print("hello, world!");
}

void loop() {
  lcd.setCursor(9, 1);
  //  lcd.print(millis()/1000);
  lcd.print(counter++);
  delay(1000);
  lcd.setCursor(9,0);
  lcd.print("Goodarz");


}

