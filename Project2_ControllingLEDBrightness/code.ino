const int ledPin = 9;
const int sensorPin = A0;
int sensorVal = 0; // ranges from 0 - 1023
int mappedVal = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorVal = analogRead(sensorPin);
  mappedVal = map(sensorVal, 0, 1023, 0, 255);
  analogWrite(ledPin, mappedVal);
}
