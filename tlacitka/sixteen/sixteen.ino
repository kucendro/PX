const int BUT1 = 3;
const int BUT2 = 4;
const int RED = 6;
const int GREEN = 7;
int c;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(BUT1, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(BUT1) == LOW) {c++;}
  if (digitalRead(BUT2) == LOW) {c++;}
  if (c == 0) {digitalWrite(GREEN, HIGH);}
  if (c == 1) {
    digitalWrite(RED, HIGH);
    delay(500/2);
    digitalWrite(RED, LOW);
    delay(500/2);
  }

  if (c == 2) {
    digitalWrite(RED, HIGH);
    delay(500/4);
    digitalWrite(RED, LOW);
    delay(500/4);

  }
}
