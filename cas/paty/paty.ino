const int LED = 7;
const int BUT = 6;
long T0;
long T1;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUT, INPUT_PULLUP);
}

void loop() {
  while (digitalRead(BUT) == HIGH) {}
  T0 = millis();
  while ((digitalRead(BUT) == LOW) && ((millis() - T0) < 3000)) {}
  if ((millis() - T0) >= 3000) {
    digitalWrite(LED, HIGH);
  };
  while (digitalRead(BUT) == LOW) {}
}
