#include "main.hpp"
#include "stepper.hpp"
#include "servo.hpp"

void setup() {
  /*pinMode(RPS_INPUT, INPUT);
  pinMode(RPS_OUTPUT, OUTPUT);
  stepper_setup();*/
  Serial.begin(9600);
  servoSetup();
  int pos;
  for (pos = 0; pos <= 180; pos++) {
    thumbDown.write(pos);
    delay(15);
  }
  for (pos = 180; pos >= 0; pos--) {
    thumbDown.write(pos);
    delay(15);
  }
}

void loop() {
  /*
  if (digitalRead(RPS_INPUT)) {
    //rps();
    Serial.println("hi");
    elbowMotor.moveTo(2000);
  }
  elbowMotor.run();
  */
}

void rps() {
  for (int i = 0; i < 3; ++i) {
    //arm up
    if (i == 2) {
      digitalWrite(RPS_OUTPUT, HIGH);
      delay(10);
      digitalWrite(RPS_OUTPUT, LOW);
    }
    //arm down
  }
}
