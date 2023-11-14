#define SENSOR_PIN A0

void setup(){
  // put your setup code here, to run once:
    Serial.begin(115200);
  }
void loop(){
    // Put your main code here, to run repeatedly
    Serial.println(analogRead(A0));
    delay(10);
  }
