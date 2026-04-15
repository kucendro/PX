const int CERVENA = 7;
const int ZELENA = 6;
const int BUT1 = 3;
const int BUT2 = 4;
int DELAY = 100;

void setup() {
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(CERVENA, OUTPUT);
  pinMode(ZELENA, OUTPUT);
}

void rozsvit(int barva) {
  digitalWrite(barva, HIGH);
}

void zhasni(int barva) {
  digitalWrite(barva, LOW);
}

void loop() {
  while (digitalRead(BUT1) == HIGH) {};
  rozsvit(ZELENA);
  delay(DELAY);
  while(digitalRead(BUT1) == LOW) {};
  delay(DELAY);
  while (digitalRead(BUT1) == HIGH) {};
  zhasni(ZELENA);
  rozsvit(CERVENA);
  delay(DELAY);
  while(digitalRead(BUT1) == LOW) {};
  delay(DELAY);
  while (digitalRead(BUT1) == HIGH) {};
  rozsvit(CERVENA);
  rozsvit(ZELENA);
  delay(DELAY);
  while(digitalRead(BUT1) == LOW) {};
  delay(DELAY);
  while (digitalRead(BUT1) == HIGH) {};
  zhasni(ZELENA);
  zhasni(CERVENA);
  delay(DELAY);
  while(digitalRead(BUT1) == LOW) {};
  delay(DELAY);

}