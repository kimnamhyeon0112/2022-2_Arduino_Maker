#include <Servo.h>

Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(8);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value=analogRead(A0);
  int level=map(value, 0, 1023, 0, 180);
  myservo.write(level);
}
