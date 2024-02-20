#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
 
 
}

void loop() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(2,0);
  lcd.print("Mehmet");

  for(int i=0;i<16;i++)
  {
    lcd.setCursor(i,1);
    lcd.print("Emre");
    delay(1000);
    lcd.setCursor(i,1);
    lcd.print(" ");
  }
  

}
