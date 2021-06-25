void setup() {
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(A5, OUTPUT);
  pinMode(2, OUTPUT);
}
void loop() {
  if (digitalRead(A2) == 0)
  {
    delay(50);
    while (digitalRead(A2) == 0);
    delay(50);
    digitalWrite(A5, 1);
    digitalWrite(2, 1);
  }
  if (digitalRead(A3) == 0)
  {
    delay(50);
    while (digitalRead(A3) == 0);
    delay(50);
    digitalWrite(A5, 0);
    digitalWrite(2, 0);
  }
}
