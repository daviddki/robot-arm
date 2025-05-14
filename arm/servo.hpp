#ifndef _SERVO_HPP
#define _SERVO_HPP

#include <Servo.h>

extern Servo thumbUp;
extern Servo thumbDown;
extern Servo fingersUp;
extern Servo fingersDown;

#define SERVO0 11

void servoSetup();

#endif /* _SERVO_HPP */
