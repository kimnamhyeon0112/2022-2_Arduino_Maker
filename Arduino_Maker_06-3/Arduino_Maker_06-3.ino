int rec = 5, playe = 4, command;

void setup() {
  Serial.begin(9600);
  pinMode(rec, INPUT);
  pinMode(playe, OUTPUT);
  Serial.println("**********command**********");
  Serial.println("1. record 10sec");
  Serial.println("2. play");
}

void loop() {
  while(Serial.available())
  {
    command = Serial.read();
    switch(command)
    {
      case '1':
      Serial.println("Recording 10 sec...");
      digitalWrite(rec, HIGH);
      delay(10000);
      digitalWrite(rec, LOW);
      Serial.println("Recording finished");

      case '2':
      Serial.println("play the record!!");
      digitalWrite(playe, HIGH);
      delay(10);
      digitalWrite(playe, LOW);
      break;
    }
  }
}
