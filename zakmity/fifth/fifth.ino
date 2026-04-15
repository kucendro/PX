const int CERVENA = 7;
const int ZELENA = 6;
const int BUT1 = 3;
const int BUT2 = 4;
int DELAY = 100;
int SBUT1 = 0;
int SBUT2 = 0;

void setup() {
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(CERVENA, OUTPUT);
  pinMode(ZELENA, OUTPUT);
  Serial.begin(9600);
}

void loop() {
    while ((digitalRead(BUT1) == HIGH) && (digitalRead(BUT2) == HIGH)) {};
    delay(DELAY);
    if (digitalRead(BUT1) == LOW) {
      SBUT1++;
      Serial.println(SBUT1);
      }
    if (digitalRead(BUT2) == LOW) {
      SBUT2++;
      Serial.println(SBUT2);
    }
    while ((digitalRead(BUT1) == LOW) || (digitalRead(BUT2) == LOW)) {};

    if ((SBUT1 > 5) || (SBUT2 > 8)){
      digitalWrite(CERVENA, HIGH);
    } else digitalWrite(CERVENA, LOW);

    delay(DELAY);
}