const int BUT1 = 3;
const int BUT2 = 4;
const int RED = 6;
const int GREEN = 7;
int d;

void setup() {
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
}

void loop() {

  if (digitalRead(BUT1) == LOW) {
    d = 3000;
    digitalWrite(RED, HIGH);
    delay(d);
    digitalWrite(RED, LOW);
  } else if (digitalRead(BUT2) == LOW) {
    d = 2000;
    digitalWrite(GREEN, HIGH);
    delay(d);
    digitalWrite(GREEN, LOW);
  }



}
