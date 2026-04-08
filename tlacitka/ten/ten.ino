const int RED = 7;
const int BUT = 4;
int d;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(BUT, INPUT_PULLUP);
  }

void loop() {
  if (digitalRead(BUT) == LOW) {
    digitalWrite(RED, HIGH);
    delay(2000);
    digitalWrite(RED, LOW);
    delay(2000);
  }
}
