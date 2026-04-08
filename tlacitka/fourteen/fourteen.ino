const int BUT1 = 3;
const int BUT2 = 4;
const int RED = 6;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(BUT1, INPUT_PULLUP);
}

void loop() {
  while ((digitalRead(BUT1) == LOW) && (digitalRead(BUT2) == LOW)) {
    digitalWrite(RED, HIGH);
  }
  digitalWrite(RED, LOW);
}
