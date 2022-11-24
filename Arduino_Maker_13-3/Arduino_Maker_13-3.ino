#include <AFMotor.h>
AF_DCMotor motor_L(4);
AF_DCMotor motor_R(3);

void setup() {
  motor_L.setSpeed(150);
  motor_L.run(RELEASE);
  motor_R.setSpeed(150);
  motor_R.run(RELEASE);
}

void loop() {
  int val_L = digitalRead(A0);
  int val_R = digitalRead(A5);

  if(val_L==0 && val_R==0) {
    motor_L.run(FORWARD);
    motor_R.run(FORWARD);
  }

  else if(val_L==0 && val_R==1) {
    motor_L.run(FORWARD);
    motor_R.run(RELEASE);
  }

  else if(val_L==1 && val_R==0) {
    motor_L.run(RELEASE);
    motor_R.run(FORWARD);
  }

  else if(val_L==1 && val_R==1) {
    motor_L.run(RELEASE);
    motor_R.run(RELEASE);
  }
}
