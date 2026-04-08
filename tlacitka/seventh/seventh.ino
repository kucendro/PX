const int RED = 6;
const int BUT = 4;
int f;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(BUT, INPUT_PULLUP); 
}

void loop() {

  if (digitalRead(BUT) == LOW) {
    f = 10;
  } else {
    f = 5;
  }

    digitalWrite(RED, HIGH);
    delay(500/f);
    digitalWrite(RED, LOW);
    delay(500/f);
}
