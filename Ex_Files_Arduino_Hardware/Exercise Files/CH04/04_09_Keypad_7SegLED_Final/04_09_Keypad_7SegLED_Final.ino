// this program is to interface 7segled with keypad
#include <Keypad.h>

// intializing the rows and cols on the keypad
const byte ROWS=4;
const byte COLS=3;

char mykeys[ROWS][COLS]={
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte rowPins[ROWS]={22,24,26,28};
byte colPins[COLS]={30,32,34};

Keypad keypad1=Keypad(makeKeymap(mykeys),rowPins,colPins,ROWS,COLS);

//identifying the pins of the shift register
const int dataPin=8; // connecting serial data pin in the shift register to pin 8 in arduino
const int latchPin=10; // connecting latch clock pin in the shift register to pin 10 in arduino
const int clockPin=11; // connecting shift clock pin in the shift register to pin 11 in arduino

int dataArray[10]={0B00000011,0B10011111,0B00100101,0B00001101,0B10011001,0B01001001,0B01000001,
0B00011111,0B00000001,0B00001001};

void setup() {
  // put your setup code here, to run once:
pinMode(latchPin,OUTPUT);
pinMode(clockPin,OUTPUT);
pinMode(dataPin,OUTPUT);

Serial.begin(9600);

}

void loop()
{
  char keypressed=keypad1.getKey();
  int keycode=0;
  if(keypressed)
    {
       Serial.println(keypressed);
        String KeyNumber=String(keypressed);
        int index=KeyNumber.toInt();
        keycode=dataArray[index];

        digitalWrite(latchPin,LOW);//ground latchPin and hold low for as long as you are transmitting
        shiftOut(dataPin,clockPin,MSBFIRST,keycode);
        digitalWrite(latchPin,HIGH);//pull the latchPin to save the data
    }
 }














 
