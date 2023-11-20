void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
  pinMode(7, INPUT);
  delay(500);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 0;
  if(digitalRead(7)==HIGH)
  {
    a:
    digitalWrite(11, HIGH);
    delay(100);
    digitalWrite(11,LOW);
    delay(100);
    i++;
    if(i<50){
      goto a;
      }
    }
}
