#include "servo.hpp"

Servo thumbDown;

void servoSetup() {
  thumbDown.attach(SERVO0);
}
