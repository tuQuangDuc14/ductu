void setup() {
  pinMode(2, OUTPUT);
  pinMode(5, INPUT_PULLUP);
}
int x =-1 ;
void loop() {
  if (digitalRead(5) == 0)
  {
    delay(50);
    while (digitalRead(5) == 0);
    delay(50);
    x++;
  }
  if (x % 2 == 0)
  {
    digitalWrite(2, 1);
  }
  else{
        digitalWrite(2, 0);

  }
}
