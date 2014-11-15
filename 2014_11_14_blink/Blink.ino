/*
  Blink
  Turns on color LEDs one by one and then all repeatedly.
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins as an output and set them to HIGH level to turn leds off (common anode).
  pinMode(10, OUTPUT); //blue
  pinMode(11, OUTPUT); //green
  pinMode(12, OUTPUT); //red
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(500);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(2000);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
}
