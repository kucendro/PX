long time;
const int Z = 8;
const int R = 7;


void async() {
   // my try to make async calls but hopeless
  long time = millis();
  Serial.println(String(time));
  digitalWrite(LED_BUILTIN, HIGH);
  delay(50);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(425);
  digitalWrite(7, HIGH);\
  digitalWrite(8, LOW);
  delay(425);
}


void petka() {
  // zelena led neustale blika, frekvence blikani se po kazdem bliknuti zvysi o 1 hz, po dostazeni 50 hz se vrati na vzchozi hodnotu 1 hz a proces se opakuje
  for (int i = 1; i <= 50; i++) {
    Serial.println(String(i) + " Hz");
    digitalWrite(Z, HIGH);
    delay(1000 / i);
    digitalWrite(Z, LOW);
    delay(1000 / i);
  }
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(R, OUTPUT);
  pinMode(Z, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  petka();
}
