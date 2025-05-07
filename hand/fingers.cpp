#include "fingers.hpp"


AccelStepper motor0(InterfaceType, X_STEP_PIN, X_DIR_PIN);
AccelStepper motor1(InterfaceType, Y_STEP_PIN, Y_DIR_PIN);
AccelStepper motor2(InterfaceType, Z_STEP_PIN, Z_DIR_PIN);

Finger finger0(motor0, 1);
Finger finger1(motor1, 1);
Finger finger2(motor2, 1);

void motor_setup() {
  //400 and 200 are temporary values
  //we will have to play around with the hardware a bit
  //before the desired speed/acceleration is found
  motor0.setMaxSpeed(400);
  motor0.setAcceleration(200);

  motor1.setMaxSpeed(400);
  motor1.setAcceleration(200);

  motor2.setMaxSpeed(400);
  motor2.setAcceleration(200);
}

void open_finger(Finger& finger) {
  if (!finger->open) {
    finger->motor.moveTo(fingerSteps);//check polarity. make sure positive value opens finger
    finger->open = 1;
  }
}
void close_finger(Finger& finger) {
  if (finger->open) {
    finger->motor.moveTo(-fingerSteps);//check polarity
    finger->open = 0;
  }
}

