#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int randNumberArray[27];

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);

  for(int i=0; i<27; i++)
  {
    randNumberArray[i] = random(9);
    lcd.print(randNumberArray[i]);
    lcd.scrollDispalyLeft();
    lcd.print(" ");
    delay(250);
  }
}
