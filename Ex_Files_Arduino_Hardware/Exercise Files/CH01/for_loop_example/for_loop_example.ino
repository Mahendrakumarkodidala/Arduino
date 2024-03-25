void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

for(int counter=0;counter<10;counter=counter+2)
{
  Serial.println(counter);
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
