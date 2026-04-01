const int GREEN_LED = 8;
const int RED_LED = 7;
const int BUTTON1 = 3;
const int BUTTON2 = 4;
const int PERMANENT_OUTPUT = 2;

void myfirsttry() {
  digitalWrite(PERMANENT_OUTPUT, HIGH);

  while (digitalRead(BUTTON1) == LOW) {
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, LOW);
  }
   while (digitalRead(BUTTON1) == HIGH) {
     digitalWrite(GREEN_LED, LOW);
     digitalWrite(RED_LED, HIGH);
    }
}

void first() {
  digitalWrite(PERMANENT_OUTPUT, HIGH);

  while (digitalRead(BUTTON1) == LOW) {
    digitalWrite(GREEN_LED, HIGH);
  }

  digitalWrite(GREEN_LED, LOW);
}

void second() {
  digitalWrite(PERMANENT_OUTPUT, HIGH);


  if (digitalRead(BUTTON1) == LOW) {
    digitalWrite(RED_LED, HIGH);
  } else {
    digitalWrite(RED_LED, LOW);
  }

  if (digitalRead(BUTTON2) == LOW) {
    digitalWrite(GREEN_LED, HIGH);
  } else {
    digitalWrite(GREEN_LED, LOW);
  }
}

void third() {
  digitalWrite(PERMANENT_OUTPUT, HIGH);

  if (digitalRead(BUTTON1) == LOW) {
    digitalWrite(GREEN_LED, HIGH);
  }

  if (digitalRead(BUTTON2) == LOW) {
    digitalWrite(GREEN_LED, LOW);
  }
}

void fourth() {

  // to setup
  // digitalWrite(PERMANENT_OUTPUT, HIGH);
  // while (digitalRead(BUTTON1) == HIGH){};

    digitalWrite(GREEN_LED, HIGH);
    delay(62.5);
    digitalWrite(GREEN_LED, LOW);
    delay(62.5);
}


void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(PERMANENT_OUTPUT, OUTPUT);
}

void loop() {
  fourth();
}
