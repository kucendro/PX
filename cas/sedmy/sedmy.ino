const int LED1 = 5;
const int LED2 = 6;
const int BUT = 11;
long T;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUT, INPUT_PULLUP);
  Serial.begin(9600);
  while (digitalRead(BUT) == HIGH) {}
  T = millis();
}

void loop() {
  while (digitalRead(BUT) == HIGH) {}
  Serial.println(millis() - T);
  T = millis();
}
