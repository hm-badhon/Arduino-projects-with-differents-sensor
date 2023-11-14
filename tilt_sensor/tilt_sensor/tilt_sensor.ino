#define tiltpin 2
#define ledpin 3
void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(tiltpin, INPUT);
}

void loop()
{
  if(digitalRead(tiltpin)==LOW)
  {
    digitalWrite(ledpin,HIGH);
    delay(100);
  }
  else
  {
    digitalWrite(ledpin, LOW);
  }
}