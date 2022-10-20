void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);
  int light = map(value, 100, 600, 255, 0);
  analogWrite(11, light);
}
