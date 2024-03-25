// this is the code to show numbers 0-9 for 7 segment using shift register common Anode

const int dataPin=8; // connecting serial data pin in the shift register to pin 8 in arduino
const int latchPin=10; // connecting latch clock pin in the shift register to pin 10 in arduino
const int clockPin=11; // connecting shift clock pin in the shift register to pin 11 in arduino


// the binary numbers of 0-9 are initalized in an array
int dataArray[10]={0B00000011,0B10011111,0B00100101,0B00001101,0B10011001,0B01001001,0B01000001,
0B00011111,0B00000001,0B00001001}; 


void setup() {
  // put your setup code here, to run once:
pinMode(latchPin,OUTPUT); // set latchpin to ouput
pinMode(clockPin,OUTPUT); // set clockpin to output
pinMode(dataPin,OUTPUT); // set datapin to output
}

void loop() {
  // put your main code here, to run repeatedly:
  //using for loop to count up to 10, increment by 1
  for (int index=0; index<10; index++)
  {
    digitalWrite(latchPin,LOW); //ground latchPin and hold low for as long as you are transmitting
  shiftOut(dataPin,clockPin,MSBFIRST,dataArray[index]); // using shiftout Command to shift the binary numbers that are stored in DataArray[]
   digitalWrite(latchPin,HIGH); //return the latch pin high after finishing transmitting

   delay(1000); //delay 1 second
  }

}
