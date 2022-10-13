int melody[] = {392, 392, 440, 440, 392, 392, 330, 392, 392, 330, 330, 294, 392, 392, 440, 440, 392, 392, 330, 392, 330, 294, 330, 262};
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 24; i++)
  {
    tone(8, melody[i], 250);
    delay(400);
    noTone(8);
    delay(400);
  }
}
