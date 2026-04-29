const int LED = 7;
const int BUT = 6;
long T0;
long T1;

void setup() {
pinMode(LED, OUTPUT);
pinMode(BUT, INPUT_PULLUP);
}

void loop() {
  while (digitalRead(BUT) == HIGH) {};
  delay(100);
  T0 = millis() - 100;
  while (digitalRead(BUT) == LOW) {};
  delay(100);
  T1 = millis() - 100;

  if ((T1 - T0) > 3000) {
    digitalWrite(LED, HIGH);
  }
}
