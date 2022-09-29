int flag;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(2,INPUT);
  randomSeed(analogRead(A0));
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(2);
  if (value == HIGH)
  {
    if(flag == 0) flag=1;
  }
  else
  {
    if(flag==1)
    {
      int ledstatus=digitalRead(3);
      if(ledstatus==HIGH)
      {
        digitalWrite(3, LOW);
        analogWrite(9,0);
        analogWrite(10,0);
        analogWrite(11,0);
      }
      else
      {
        digitalWrite(3, HIGH);
        analogWrite(9,random(256));
        analogWrite(10,random(256));
        analogWrite(11,random(256));
      }
      flag=0;
    }
  }
  delay(10);
}
