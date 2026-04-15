const int CERVENA = 7;
const int ZELENA = 6;
const int BUT1 = 3;
const int BUT2 = 4;

void setup() {
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(CERVENA, OUTPUT);
  pinMode(ZELENA, OUTPUT);
}

void loop() {

  while (digitalRead(BUT1) == HIGH) {};
  delay(100);
  digitalWrite(CERVENA, HIGH);
  while(digitalRead(BUT1) == LOW) {};
  delay(100);
  while(digitalRead(BUT1) == HIGH) {};
  delay(100);
  digitalWrite(CERVENA, LOW);
  while(digitalRead(BUT1) == LOW) {};
  delay(100);

}