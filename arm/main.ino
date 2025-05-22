#include "main.hpp"
#include "stepper.hpp"

bool done = 0;

void setup() {
  /*
  pinMode(RPS_INPUT, INPUT);
  pinMode(RPS_OUTPUT, OUTPUT);
  stepper_setup();
  */
  Serial.begin(9600);
  stepper_setup();
  baseMotor.moveTo(400);
}

void loop() {
  
    if (!digitalRead(RPS_INPUT)) {
      rps();
    }
  
  }

void rps() {
  for (int i = 0; i < 3; ++i) {
    elbowMotor.moveTo(400);
    while (elbowMotor.isRunning()) {
      elbowMotor.run();
    }
    if (i != 2) {
      elbowMotor.moveTo(0);
      while (elbowMotor.isRunning()) {
        elbowMotor.run();
      }
    } else {
      //move fingers accordingly
    }
  }
  delay(5000);
  elbowMotor.moveTo(0);
  while (elbowMotor.isRunning()) {
    elbowMotor.run();
  }
}
