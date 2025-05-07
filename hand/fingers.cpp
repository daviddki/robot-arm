#include "fingers.hpp"

AccelStepper finger1(InterfaceType, X_STEP_PIN, X_DIR_PIN);
AccelStepper finger2(InterfaceType, Y_STEP_PIN, Y_DIR_PIN);
AccelStepper finger3(InterfaceType, Z_STEP_PIN, Z_DIR_PIN);

void setup() {
  //400 and 200 are temporary values
  //we will have to play around with the hardware a bit
  //before the desired speed/acceleration is found
  finger1.setMaxSpeed(400);
  finger2.setAcceleration(200);

  finger2.setMaxSpeed(400);
  finger2.setAcceleration(200);

  finger3.setMaxSpeed(400);
  finger3.setAcceleration(200);
}
