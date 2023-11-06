int Buzzer =13;
int FlamePin = 2;
int Flame = HIGH;


void setup() {
  // put your setup code here, to run once:
  pinMode(Buzzer, OUTPUT);
  pinMode(FlamePin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Flame = digitalRead(FlamePin);
  if (Flame== HIGH)
  {
    Serial.println("Fire Detected . ");
    digitalWrite(Buzzer, HIGH);
  }
  else
  {
    Serial.println("Fire not detected");
    digitalWrite(Buzzer, LOW);
  }

}
