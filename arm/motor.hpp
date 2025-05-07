#ifndef _MOTOR_HPP
#define _MOTOR_HPP

#include <AccelStepper.h>

#define InterfaceType AccelStepper::DRIVER

//Define pins for stepper motors
#define X_STEP_PIN 54
#define X_DIR_PIN 55

#define Y_STEP_PIN 60
#define Y_DIR_PIN 61

#define Z_STEP_PIN 46
#define Z_DIR_PIN 48

#define E0_STEP_PIN 26
#define E0_DIR_PIN 28

#define E1_STEP_PIN 36
#define E1_DIR_PIN 34

void setup();

#endif /* _MOTOR_HPP */
