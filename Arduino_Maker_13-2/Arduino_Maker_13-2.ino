#include <AFMotor.h>
AF_DCMotor motor_L(3);
AF_DCMotor motor_R(4);

void setup() {
  motor_L.setSpeed(250);
  motor_L.run(RELEASE);
  motor_R.setSpeed(250);
  motor_R.run(RELEASE);
}

void loop() {
  motor_L.run(FORWARD);
  motor_R.run(FORWARD);
  delay(1000);

  motor_L.run(RELEASE);
  motor_R.run(RELEASE);
  delay(1000);

  motor_L.run(BACKWARD);
  motor_R.run(BACKWARD);
  delay(1000);

  motor_L.run(RELEASE);
  motor_R.run(RELEASE);
  delay(1000);
}
