

const int ledPinA=2;
const int ledPinB=3;
const int ledPinC=4;
const int ledPinD=5;
const int ledPinE=6;
const int ledPinG=7;
const int ledPinF=8;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPinA,OUTPUT);
  pinMode(ledPinB,OUTPUT);
  pinMode(ledPinC,OUTPUT);
  pinMode(ledPinD,OUTPUT);
  pinMode(ledPinE,OUTPUT);
  pinMode(ledPinG,OUTPUT);
  pinMode(ledPinF,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

 digitalWrite(ledPinA,HIGH);
 digitalWrite(ledPinB,HIGH);
 digitalWrite(ledPinC,HIGH);
 digitalWrite(ledPinD,HIGH);
 digitalWrite(ledPinE,HIGH);
 digitalWrite(ledPinF,HIGH);
 digitalWrite(ledPinG,HIGH);
 
 
 
 
 digitalWrite(ledPinA,LOW);// TURN ON THE LED
  delay(1000);
 digitalWrite(ledPinA,HIGH);

  digitalWrite(ledPinB,LOW);// TURN ON THE LED
  delay(1000);
 digitalWrite(ledPinB,HIGH);

   digitalWrite(ledPinC,LOW);// TURN ON THE LED
  delay(1000);
 digitalWrite(ledPinC,HIGH);

   digitalWrite(ledPinD,LOW);// TURN ON THE LED
  delay(1000);
 digitalWrite(ledPinD,HIGH);

   digitalWrite(ledPinE,LOW);// TURN ON THE LED
  delay(1000);
 digitalWrite(ledPinE,HIGH);

   digitalWrite(ledPinF,LOW);// TURN ON THE LED
  delay(1000);
 digitalWrite(ledPinF,HIGH);

   digitalWrite(ledPinG,LOW);// TURN ON THE LED
  delay(1000);
 digitalWrite(ledPinG,HIGH);
}







