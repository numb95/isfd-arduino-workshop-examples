#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
int led = 13;

char ser_input = 0;
void setup()
{
lcd.begin(16,2);
Serial.begin(9600);

}
 
void loop()
{
  lcd.setCursor(0,0);
  ser_input = Serial.read();
  //lcd.print(ser_input);
  lcd.print(ser_input);
  
}
