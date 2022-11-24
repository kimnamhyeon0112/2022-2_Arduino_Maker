void setup() {
  Serial.begin(9600);
}

void loop() {
  int value=digitalRead(A0);
  Serial.println(value);
  delay(100);
}
