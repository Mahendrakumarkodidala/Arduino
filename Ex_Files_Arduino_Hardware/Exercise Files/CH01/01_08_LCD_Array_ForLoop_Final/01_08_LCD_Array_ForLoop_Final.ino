// this program is to demonestrate using an array to be displayed on LCD using for loop
#include<LiquidCrystal.h>  // include the liquid crystal library for the LCD 

const int rs=12, en=11, d4=5, d5=4, d6=3, d7=2;
// initialize the library with the numbers of the interface pins
  LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
  
int randNumberArray[27];

void setup() {
lcd.begin(16,2);   // set up the LCD's number of columns and rows:
}
 
void loop() { 
  // put your main code here, to run repeatedly:

  lcd.setCursor(0,0); // set the cursor of the LCD to be on the last column in the first row

  for(int i=0;i<27;i++) // using a for loop that starts from 0 to 27 and increments by 1
  {
    randNumberArray[i]=random(9); //generating random numbers
    lcd.print(randNumberArray[i]);
    lcd.scrollDisplayLeft();
    lcd.print(" ");
    delay(250);
    
  }
}











