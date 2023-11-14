#define tiltPin 2
#define ledPin 3

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(tiltPin, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  static int previousTiltState = HIGH;

  int currentTiltState = digitalRead(tiltPin);

  if (currentTiltState != previousTiltState)
  {
    Serial.println(currentTiltState == LOW ? "Tilt state changed to LOW" : "Tilt state changed to HIGH");
    previousTiltState = currentTiltState;
  }

  digitalWrite(ledPin, currentTiltState == LOW ? HIGH : LOW);
  delay(100);
}
