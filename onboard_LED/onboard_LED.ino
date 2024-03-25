int LED = 13;
int Count = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Count = Count + 1;
  Serial.Print("Count # ");
  Serial.Println(Count);
digitalWrite(LED,HIGH); //on
delay(1000); //1000ms = 1 sec
digitalWrite(LED,LOW); //off
delay(500);
}
