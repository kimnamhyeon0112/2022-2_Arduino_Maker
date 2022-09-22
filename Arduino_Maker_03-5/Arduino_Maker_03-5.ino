int r=0, g=0, b=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == HIGH)
  {
    r++;
    if (r>255)
    {
      r=0;
    }
  }

  if (digitalRead(3) == HIGH)
  {
    g++;
    if (g>255)
    {
      g=0;
    }
  }

  if (digitalRead(4) == HIGH)
  {
    b++;
    if (b>255)
    {
      b=0;
    }
  }
  analogWrite(9, r);
  analogWrite(10, g);
  analogWrite(11, b);
  delay(10);
}
