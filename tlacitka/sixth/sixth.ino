const int RED = 6;
const int BUT1 = 4;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(BUT1, INPUT_PULLUP);
}

void loop() {
  while (digitalRead(BUT1) == LOW) {
  digitalWrite(RED, HIGH);
  delay(100);
  digitalWrite(RED, LOW);
  delay(100);
  }
}
