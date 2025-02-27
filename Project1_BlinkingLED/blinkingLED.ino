int redLED = 13;
int yellowLED = 12;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
