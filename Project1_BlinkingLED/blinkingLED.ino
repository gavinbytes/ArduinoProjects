// Blinking LED Sequence for Educational Signaling
// Alternates Red and Yellow LEDs to simulate a traffic light

// Pin definitions for LEDs
const int redLED = 13;    // Red LED connected to pin 13
const int yellowLED = 12; // Yellow LED connected to pin 12

void setup() {
  pinMode(redLED, OUTPUT);    // Set Red LED pin as output
  pinMode(yellowLED, OUTPUT); // Set Yellow LED pin as output
}

void loop() {
  digitalWrite(yellowLED, LOW);    // Turn Yellow LED off
  digitalWrite(redLED, HIGH);      // Turn Red LED on
  delay(1000);                     // Wait for 1 second
  digitalWrite(redLED, LOW);       // Turn Red LED off
  digitalWrite(yellowLED, HIGH);   // Turn Yellow LED on
  delay(1000);                     // Wait for 1 second
}
