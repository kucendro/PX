const int LEDZ = 6;
const int LEDC = 5;
const int POT = A5;
int VALUE;

void setup() {
  pinMode(LEDZ, OUTPUT);
  pinMode(LEDC, OUTPUT);
}

void loop() {
  VALUE = analogRead(POT);
  analogWrite(LEDZ, map(VALUE, 0, 1023, 0, 255));
}
