const int LED = 6;
const int BUT1 = 3;
const int BUT2 = 4;

void setup() {
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop() {
  while ((digitalRead(BUT1) == HIGH) && (digitalRead(BUT2) == HIGH)) {
    digitalWrite(LED, LOW);
  }
  digitalWrite(LED, HIGH);
}
