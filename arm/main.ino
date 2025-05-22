#include "main.hpp"
#include "stepper.hpp"
#include "servo.hpp"

bool done = 0;

void setup() {
  /*
  pinMode(RPS_INPUT, INPUT);
  pinMode(RPS_OUTPUT, OUTPUT);
  stepper_setup();
  */
  Serial.begin(9600);
  stepper_setup();
}

void loop() {
  /*
  if (digitalRead(RPS_INPUT)) {
    //rps();
    Serial.println("hi");
    elbowMotor.moveTo(2000);
  }
  */
  if (!done) {
    rps();
    done = 1;
  }
  //wristMotor.run();
  /*
  Serial.println(1);
  thumbDown.write(0);
  delay(1000);
  thumbDown.write(90);
  delay(1000);
  thumbDown.write(180);
  delay(1000);
  */
}

void rps() {
  for (int i = 0; i < 3; ++i) {
    elbowMotor.moveTo(400);
    while (elbowMotor.isRunning()) {
      elbowMotor.run();
    }
    //arm up
    if (i != 2) {
      elbowMotor.moveTo(0);
      while (elbowMotor.isRunning()) {
        elbowMotor.run();
      }
    } else {
      //move fingers accordingly
    }
    //arm down
  }
}
