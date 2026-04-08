const int RED = 6;
const int GREEN = 7;
const int BUT1 = 4;
const int BUT2 = 3;
int f = 4;

void setup() {
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  if (digitalRead(BUT1) == HIGH) {
    digitalWrite(GREEN, HIGH);
    digitalWrite(RED, LOW);
    delay(500/f);
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
    delay(500/f);
  } else {

    digitalWrite(RED, LOW);
    delay(500/f);
    digitalWrite(RED, HIGH);
    delay(500/f);
  }

  }
