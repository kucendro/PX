const int LED = 7;
const int BUT = 6;
long T0;
long T1;
int S = 0;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUT, INPUT_PULLUP);
}

void loop() {
  while (digitalRead(BUT) == HIGH) {}
  T0 = millis();
  while ((digitalRead(BUT) == LOW) && ((millis() - T0) < 1000)) {}
  if ((millis() - T0) >= 1000) {
    S++;
  };
  while (digitalRead(BUT) == LOW) {}
  delay(100);

  if ((S%5) == 0) {
    digitalWrite(LED, HIGH);
  }
}
