int x=0;
void setup()
{
  pinMode(A2, INPUT_PULLUP);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(2, OUTPUT);
}
void loop() {
  if (digitalRead(A2)== 0)
  {
    delay(50);
    while (digitalRead(A2) == 0)
      delay(50);
    x++;
  }
  if (x%2== 0)
  {
    digitalWrite(A4, 1);
    digitalWrite(A5, 1);
    digitalWrite(2, 0);
  }
  else
  {
    digitalWrite(A4, 0);
    digitalWrite(A5, 0);
    digitalWrite(2, 1);

  }
}
