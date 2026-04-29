const int LED = 7;
const int BUT = 6;
long T0;
long T1;
int S = 0;

void setup() {
pinMode(LED, OUTPUT);
pinMode(BUT, INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {

  while (digitalRead(BUT) == HIGH) {};
  S++;

  if (S == 1) {T0 = millis();};

  if ((S%10) == 0) {
    T1 = millis();
    Serial.println("Cas mezi prvnim a desatym stiskem: " + String(T1 - T0));
    S = 0;
  }
  delay(100);
  
  while (digitalRead(BUT) == LOW) {};
  delay(100);
}
