int led = 13;
int button = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  int buttonState = digitalRead(button);

  if (buttonState == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
