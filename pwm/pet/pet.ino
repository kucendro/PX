const int LED2 = 5;
const int BUT = 8;
const int BUT2 = 9;
const int JAS[] = { 0, 1, 2, 4, 8, 16, 32, 64, 128, 255 };
int STEP = 0;
int SIZE = sizeof(JAS) / sizeof(JAS[0]);

void setup() {
  pinMode(LED2, OUTPUT);
  pinMode(BUT, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
}

void loop() {

  if ((digitalRead(BUT) == LOW) && (STEP >= 0 && STEP < SIZE - 1)) {
    while (digitalRead(BUT) == LOW) {};
    STEP++;
    analogWrite(LED2, JAS[STEP]);
  };

  if ((digitalRead(BUT2) == LOW) && (STEP > 0 && STEP <= SIZE - 1)) {
    while (digitalRead(BUT2) == LOW) {};
    STEP--;
    analogWrite(LED2, JAS[STEP]);
  };
}