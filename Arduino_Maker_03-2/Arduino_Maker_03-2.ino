void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 256; i++)
  {
    Serial.println(i);
    delay(50);
  }
  for(int i = 255; i > -1; i--)
  {
    Serial.println(i);
    delay(50);
  }
}
