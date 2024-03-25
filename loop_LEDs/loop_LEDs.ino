// This program is to turn on and off the LEDS within the 7 segment LED(Common Anode) using for loop

//identifying the pins
const int ledPinA=2;
const int ledPinB=3;
const int ledPinC=4;
const int ledPinD=5;
const int ledPinE=6;
const int ledPinG=7;
const int ledPinF=8;

void setup() {
  
  // Setting up the pins to be an output using for loop
  
  for(int i=2;i<9;i++)
  {
    pinMode(i,OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

 // for loop to turn off the 7 segement LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 
 
 
 digitalWrite(ledPinA,LOW);// TURN ON THE LED
  delay(1000);
 digitalWrite(ledPinA,HIGH);//Turn OFF LED

  digitalWrite(ledPinB,LOW);// TURN ON THE LED
  delay(1000);
 digitalWrite(ledPinB,HIGH);//Turn OFF LED

   digitalWrite(ledPinC,LOW);// TURN ON THE LED
  delay(1000);
 digitalWrite(ledPinC,HIGH);//Turn OFF LED

   digitalWrite(ledPinD,LOW);// TURN ON THE LED
  delay(1000);
 digitalWrite(ledPinD,HIGH);//Turn OFF LED

   digitalWrite(ledPinE,LOW);// TURN ON THE LED
  delay(1000);
 digitalWrite(ledPinE,HIGH);//Turn OFF LED

   digitalWrite(ledPinF,LOW);// TURN ON THE LED
  delay(1000);
 digitalWrite(ledPinF,HIGH);//Turn OFF LED

   digitalWrite(ledPinG,LOW);// TURN ON THE LED
  delay(1000);
 digitalWrite(ledPinG,HIGH);//Turn OFF LED
}







