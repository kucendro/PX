const int CERVENA = 7;
const int ZELENA = 6;
const int BUT1 = 3;
const int BUT2 = 4;
int STISKY = 0;

void setup() {
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(CERVENA, OUTPUT);
  pinMode(ZELENA, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  while (digitalRead(BUT1) == HIGH) {};
  delay(100);
  STISKY++;
  Serial.println(STISKY);
  while(digitalRead(BUT1) == LOW) {};
  delay(100);
}