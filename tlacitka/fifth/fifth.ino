const int GREEN = 8;
const int RED = 7;
const int BUT1 = 4;
const int BUT2 = 3;

void setup() {
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(BUT1, INPUT);
  pinMode(BUT2, INPUT);
  while (digitalRead(BUT1) == HIGH){};
  digitalWrite(RED, HIGH);
  while (digitalRead(BUT1) == LOW){};
  digitalWrite(GREEN, HIGH);
  while (digitalRead(BUT2) == HIGH){};
}

void loop() {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    delay(50);
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
    delay(50);
}
