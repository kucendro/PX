const int LED1 = 5;
const int LED2 = 6;
const int BUT = 11;
long T;
long Tr;
long T2;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUT, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  Tr = random(1000, 5000);
  delay(Tr);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  T = millis();
  while (digitalRead(BUT) == HIGH) {}
  T2 = millis();
  Serial.println("Reakcni doba: " + String(T2 - T));
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}
