const int LED1 = 5;
const int LED2 = 6;
const int BUT = 11;
int P1 = 200;
int P2 = 2000;
int P3 = 3000;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUT, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
    if (millis() % P1 < (P1 / 2)) {
      digitalWrite(LED1, HIGH);
    } else {
      digitalWrite(LED1, LOW);
    }


    if (millis() % P2 < (P2 / 200)) {
      digitalWrite(LED2, HIGH);
    } else {
      digitalWrite(LED2, LOW);
    }

    if (millis()% P3 < (P3 / 300)) {
      Serial.println("AHOJ");
      delay(100);
    }
}