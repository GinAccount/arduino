const int RED=9;
const int GREEN=11;
const int BLUE=10;

void setup() {
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);

  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
}

int val = 255;
void loop() {
  analogWrite(BLUE, val);
  val--;
  delay(20);
  if (val == 0) {
    val = 255;
  }
}