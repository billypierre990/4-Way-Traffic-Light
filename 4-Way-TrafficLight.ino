// Pin definitions for the LEDs
const int redLED = 10;    // Red LED for Stop
const int greenLED = 11;  // Green LED for Go
const int yellowLED = 12; // Yellow LED for Slow Down
const int blueLED = 13;   // Blue LED for Pedestrian

// Define the duration each light will stay on (in milliseconds)
const int redDuration = 5000;    // 5 seconds for red light
const int greenDuration = 5000;  // 5 seconds for green light
const int yellowDuration = 2000; // 2 seconds for yellow light
const int blueDuration = 3000;   // 3 seconds for blue pedestrian light
const int flashDelay = 500;      // Duration of each flash (on/off)

void setup() {
  // Set up each LED pin as an output
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  // Turn on the red LED for Stop
  digitalWrite(redLED, HIGH);
  delay(redDuration);   // Wait for the red duration
  digitalWrite(redLED, LOW);

  // Turn on the green LED for Go
  digitalWrite(greenLED, HIGH);
  delay(greenDuration); // Wait for the green duration
  digitalWrite(greenLED, LOW);

  // Turn on the yellow LED for Slow Down
  digitalWrite(yellowLED, HIGH);
  delay(yellowDuration); // Wait for the yellow duration
  digitalWrite(yellowLED, LOW);

  // Turn on the blue LED for Pedestrian light
  digitalWrite(blueLED, HIGH);
  delay(blueDuration); // Wait for the blue duration
  digitalWrite(blueLED, LOW);

  // Flash all LEDs 3 times before restarting the cycle
  for (int i = 0; i < 3; i++) {
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(blueLED, HIGH);
    delay(flashDelay); // LEDs on

    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(blueLED, LOW);
    delay(flashDelay); // LEDs off
  }

  // Repeat the cycle
}
