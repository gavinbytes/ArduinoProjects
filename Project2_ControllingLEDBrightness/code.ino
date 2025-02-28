// Controlling LED Brightness - Dynamic Light Sculpture for Art Installation
// This sketch reads a potentiometer's analog value to control a Red LED's brightness
// using PWM, creating an interactive art piece for gallery visitors.

// Pin definitions
const int LED_PIN = 9;    // PWM-capable pin for Red LED brightness control
const int SENSOR_PIN = A0; // Analog pin for potentiometer input

int sensorVal = 0; // Variable to store potentiometer reading (0-1023)
int mappedVal = 0; // Variable to store mapped value for PWM (0-255)

void setup() {
  Serial.begin(9600);    // Initialize Serial Monitor for debugging (optional)
  pinMode(LED_PIN, OUTPUT); // Set LED pin as output for PWM control
}

void loop() {
  sensorVal = analogRead(SENSOR_PIN); // Read potentiometer value (0-1023)
  mappedVal = map(sensorVal, 0, 1023, 0, 255); // Map analog input to PWM range (0-255)
  analogWrite(LED_PIN, mappedVal); // Adjust LED brightness proportionally to potentiometer position
}