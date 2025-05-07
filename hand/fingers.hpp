#ifndef _FINGERS_HPP
#define _FINGERS_HPP

#include <AccelStepper.h>

#define InterfaceType AccelStepper::DRIVER

#define X_STEP_PIN 54
#define X_DIR_PIN 55

#define Y_STEP_PIN 60
#define Y_DIR_PIN 61

#define Z_STEP_PIN 46
#define Z_DIR_PIN 48

#define fingerSteps 500 //placeholder

typedef struct {
  AccelStepper motor;
  bool open;
} Finger;

void motor_setup();

void open_finger(Finger& finger);
void close_finger(Finger& finger);

extern AccelStepper motor0;
extern AccelStepper motor1;
extern AccelStepper motor2;

extern Finger finger0;
extern Finger finger1;
extern Finger finger2;

#endif /* _FINGERS_HPP */
