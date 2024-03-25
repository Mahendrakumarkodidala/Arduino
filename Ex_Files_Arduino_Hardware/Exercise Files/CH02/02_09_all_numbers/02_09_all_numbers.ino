// This program is to show Numbers 0-9 on the 7 segment led

//identifying the pins
const int ledPinA  =  2;     
const int ledPinB  =  3;
const int ledPinC  =  4;
const int ledPinD  =  5;
const int ledPinE  =  6;
const int ledPinG  =  7;
const int ledPinF  =  8;



void setup() {

  // Setting up the pins to be an output using for loop
    for(int i=2;i<9;i++)
  {
    pinMode(i,OUTPUT);
  }
}pin


}

void loop() {
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 
  delay(1000); //Delay 1 second
  
// display 0 
  digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinB, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on
  digitalWrite(ledPinD, LOW);   // set the LED on
  digitalWrite(ledPinE, LOW);   // set the LED on
  digitalWrite(ledPinF, LOW);   // set the LED on

  delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 
  
// display 1
 digitalWrite(ledPinB, LOW);   // set the LED on
 digitalWrite(ledPinC, LOW);   // set the LED on
 
  delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 
  
 //display 2
  digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinB, LOW);   // set the LED on
  digitalWrite(ledPinG, LOW);   // set the LED on
  digitalWrite(ledPinE, LOW);   // set the LED on
  digitalWrite(ledPinD, LOW);   // set the LED on

  delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 
 //display 3
digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinB, LOW);   // set the LED on
  digitalWrite(ledPinG, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on
  digitalWrite(ledPinD, LOW);   // set the LED on

   delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 

 //display 4

  digitalWrite(ledPinF, LOW);   // set the LED on
  digitalWrite(ledPinG, LOW);   // set the LED on
  digitalWrite(ledPinB, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on

    delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 
  
 //display 5

  digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinF, LOW);   // set the LED on
  digitalWrite(ledPinG, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on
  digitalWrite(ledPinD, LOW);   // set the LED on

   delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 
 //display 6

  digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinF, LOW);   // set the LED on
  digitalWrite(ledPinE, LOW);   // set the LED on
  digitalWrite(ledPinD, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on
  digitalWrite(ledPinG, LOW);   // set the LED on

  delay(1000); //Delay 1 second
  
  // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 
  
 //display 7 

  digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinB, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on
 
  delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 
  
 //display 8 
 
  digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinB, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on
  digitalWrite(ledPinD, LOW);   // set the LED on
  digitalWrite(ledPinE, LOW);   // set the LED on
  digitalWrite(ledPinF, LOW);   // set the LED on
  digitalWrite(ledPinG, LOW);   // set the LED on

  delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 

 //display 9 
 
  digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinB, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on
  digitalWrite(ledPinF, LOW);   // set the LED on
  digitalWrite(ledPinG, LOW);   // set the LED on
  
  delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 
  
 
  delay(1000); //Delay 1 second

}
