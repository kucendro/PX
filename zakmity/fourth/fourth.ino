const int CERVENA = 7;
const int ZELENA = 6;
const int BUT1 = 3;
const int BUT2 = 4;
int DELAY = 100;
int STISKY = 0;

void setup() {
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(CERVENA, OUTPUT);
  pinMode(ZELENA, OUTPUT);
}

void loop() {
    while (digitalRead(BUT1) == HIGH) {};
    delay(DELAY);
    while(digitalRead(BUT1) == LOW) {};
    STISKY++;
    if ((STISKY >= 5) && (STISKY < 8)){
      digitalWrite(CERVENA, HIGH);
    } else digitalWrite(CERVENA, LOW);
    delay(DELAY);
}