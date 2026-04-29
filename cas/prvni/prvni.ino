const int LED = 7;
const int BUT = 6;
long T0;

void setup() {
pinMode(LED, OUTPUT);
pinMode(BUT, INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {
  while (digitalRead(BUT) == HIGH) {};
  T0 = millis();
  delay(100);
  Serial.println("Cas od spusteni programu: " + String(T0));
  while (digitalRead(BUT) == LOW) {};
  delay(100);
}
