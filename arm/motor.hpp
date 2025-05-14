#ifndef _MOTOR_HPP
#define _MOTOR_HPP

#include <AccelStepper.h>

#define InterfaceType AccelStepper::DRIVER

//Define pins for stepper motors
#define X_STEP_PIN 54 //A0
#define X_DIR_PIN 55 //A1
#define X_EN_PIN 38

#define Y_STEP_PIN 60 //A6
#define Y_DIR_PIN 61 //A7
#define Y_EN_PIN 56 //A2

#define Z_STEP_PIN 46
#define Z_DIR_PIN 48
#define Z_EN_PIN 62 //A8

#define E0_STEP_PIN 26
#define E0_DIR_PIN 28
#define E0_EN_PIN 24

#define E1_STEP_PIN 36
#define E1_DIR_PIN 34
#define E1_EN_PIN 30

extern AccelStepper baseMotor;
extern AccelStepper leftMotor;
extern AccelStepper rightMotor;
extern AccelStepper elbowMotor;
extern AccelStepper wristMotor;

void motor_setup();

#endif /* _MOTOR_HPP */
