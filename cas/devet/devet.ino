const int LED1 = 5;
const int LED2 = 6;
const int BUT = 11;
int P = 500;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUT, INPUT_PULLUP);
}

void loop() {
if (millis()%P<(P/2)) {
  digitalWrite(LED1, HIGH);
} else {digitalWrite(LED1, LOW);}
}
