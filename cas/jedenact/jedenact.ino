const int LED1 = 5;
const int LED2 = 6;
const int BUT = 11;
int P1 = 650;
int P2 = 83;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUT, INPUT_PULLUP);
}

void loop() {
  if (millis() < 15000) {
    if (millis() % P1 < (P1 / 2)) {
      digitalWrite(LED1, HIGH);
    } else {
      digitalWrite(LED1, LOW);
    }
  } else {
    digitalWrite(LED1, LOW);
  }

  if (millis() < 25000) {
    if (millis() % P2 < (P2 / 2)) {
      digitalWrite(LED2, HIGH);
    } else {
      digitalWrite(LED2, LOW);
    }
  } else {
    digitalWrite(LED2, LOW);
  }
}