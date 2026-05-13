const int LED2 = 5;
const int JAS[] = { 0, 20, 40, 70, 100 };


void setup() {
  pinMode(LED2, OUTPUT);
}

void loop() {
  for (int i = 0; i < (sizeof(JAS) / sizeof(JAS[0])); i++) {
    analogWrite(LED2, ((255 / 100) * JAS[i]));
    delay(1000);
  }
}