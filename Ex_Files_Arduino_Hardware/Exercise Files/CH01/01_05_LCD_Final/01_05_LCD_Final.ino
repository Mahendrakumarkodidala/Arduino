// this program is to demonestrate how to show a sentence using 16X2 LCD 
// showing sentence(Arduino is Fun
)
#include <LiquidCrystal.h>

const int rs=12, en=11, d4=5, d5=4, d6=3, d7=2;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  // set up the LCD's number of columns and rows:
 lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  //lcd.setCursor(0,0);// First row first coloumn
  
  lcd.setCursor(0,1);// Second row first coloumn
  lcd.print("Arduino is Fun !"); // Print a message to the LCD.
  delay(500); // half second delay
}
