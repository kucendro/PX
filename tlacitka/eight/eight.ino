const int GREEN = 7;
const int BUT1 = 4;
const int BUT2 = 3;
int p = 300;

void setup() {
  pinMode(GREEN, OUTPUT);
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
}

void loop() {

  if (digitalRead(BUT1) == LOW) {
    p = 120;
  } else if (digitalRead(BUT2) == LOW) {
    p = 300;
  }

  digitalWrite(GREEN, HIGH);
  delay(p/2);
  digitalWrite(GREEN, LOW);
  delay(p/2);

}
