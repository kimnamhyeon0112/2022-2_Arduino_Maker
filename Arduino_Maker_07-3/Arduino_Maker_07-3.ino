void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(4, HIGH);
  delayMicroseconds(10);
  digitalWrite(4, LOW);

  double duration = pulseIn(3, HIGH);
  double distance = duration * 340 / 10000 / 2;

  Serial.println(distance);
  delay(50);
}
