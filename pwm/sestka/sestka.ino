const int LED = 6;
const int LED2 = 5;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  analogWrite(LED, 10);
  analogWrite(LED2, 240);
  delay(500);
  analogWrite(LED, 20);
  analogWrite(LED2, 250);
  delay(500);
}