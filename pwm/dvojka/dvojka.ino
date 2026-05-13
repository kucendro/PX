const int LED2 = 5;
const int BUT = 8;
const int JAS[] = { 10, 30, 50, 80 };


void setup() {
  pinMode(LED2, OUTPUT);
  pinMode(BUT, INPUT_PULLUP);
}

void loop() {
  for (int i = 0; i < (sizeof(JAS) / sizeof(JAS[0])); i++) {
    analogWrite(LED2, ((255 / 100) * JAS[i]));
    while (digitalRead(BUT) == HIGH) {};
    delay(100);
    while (digitalRead(BUT) == LOW) {};
    delay(100);
  }
}