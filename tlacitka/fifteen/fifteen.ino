const int RED = 6;
const int GREEN = 7;
const int BUT1 = 3;
const int BUT2 = 4;

void g(int state) { digitalWrite(GREEN, state);}
void r(int state) { digitalWrite(RED, state);}

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);

  while (digitalRead(BUT2) == HIGH){};

  for (int i = 0; i < 3; i++) {
    g(HIGH); delay(350); g(LOW); delay(350);
  }

  while (digitalRead(BUT1) == HIGH){};
  r(HIGH);

}

void loop() {
  while (digitalRead(BUT2) == LOW) {
    g(HIGH);
  }
  g(LOW);
 }
