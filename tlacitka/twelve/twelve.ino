const int LED = 7;
const int BUT1 = 3;
const int BUT2 = 4;
int f = 4;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  
}

void loop() {
  while (digitalRead(BUT1) == HIGH){};
    while (digitalRead(BUT2) == HIGH) {
      digitalWrite(LED, HIGH);
      delay(500/f);
      digitalWrite(LED, LOW);
      delay(500/f);
    }
}
