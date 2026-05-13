const int LED1 = 6;
const int LED2 = 5;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 255; i++) {
    analogWrite(LED1, i);
    analogWrite(LED2, (255 - i));
    delay(4);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(LED1, i);
    analogWrite(LED2, (255 - i));
    delay(4);
  }
}