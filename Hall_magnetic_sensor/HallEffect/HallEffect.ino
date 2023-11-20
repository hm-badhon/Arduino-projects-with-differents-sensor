int hallSensorPin = 2;
int ledPin = 13;
int state = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(hallSensorPin, INPUT);
  
  Serial.begin(9600); // Initialize serial communication at 9600 bps
}

void loop() {
  state = digitalRead(hallSensorPin);

  if (state == LOW) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Magnetic effect detected!"); // Print a message when the magnetic effect is detected
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No magnetic effect."); // Print a message when no magnetic effect is detected
  }

  delay(1000); // Add a delay to avoid serial print flooding
}
