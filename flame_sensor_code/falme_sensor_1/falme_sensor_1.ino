int led = 13;
int digitalPin = 2;
int analogPin = A0;

int digitalVal;
int analogVal;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(digitalPin, INPUT);
  //pinMode(analogPin , OUTPUT);
  Serial.begin(9000);

}
void loop()
{
  // Read the digital interface
  digitalVal = digitalRead(digitalPin);
  if(digitalVal == HIGH) // if flame is detected
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led , LOW);
  }
  //  Read the analog interface
  analogVal = analogRead(analogPin);
  Serial.println(analogVal); // print analog value to serial 
  delay(100);

}