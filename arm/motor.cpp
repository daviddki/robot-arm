#include "motor.hpp"

//For the motor that rotates the base
AccelStepper baseMotor(InterfaceType, X_STEP_PIN, X_DIR_PIN);

//For the 2 motors that move the shoulder joint
AccelStepper leftMotor(InterfaceType, Y_STEP_PIN, Y_DIR_PIN);
AccelStepper rightMotor(InterfaceType, Z_STEP_PIN, Z_DIR_PIN);

//For the motor that moves the elbow joint
AccelStepper elbowMotor(InterfaceType, E0_STEP_PIN, E0_DIR_PIN);

//For the motor that moves the wrist joint
AccelStepper wristMotor(InterfaceType, E1_STEP_PIN, E0_DIR_PIN);

void setup() {
  //400 and 200 are temporary values
  //we will have to play around with the hardware a bit
  //before the desired speed/acceleration is found
  baseMotor.setMaxSpeed(400);
  baseMotor.setAcceleration(200);

  leftMotor.setMaxSpeed(400);
  leftMotor.setAcceleration(200);

  rightMotor.setMaxSpeed(400);
  rightMotor.setAcceleration(200);

  elbowMotor.setMaxSpeed(400);
  elbowMotor.setAcceleration(200);

  wristMotor.setMaxSpeed(400);
  wristMotor.setAcceleration(200);
}
