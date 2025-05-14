#include "main.hpp"
#include "motor.hpp"

void setup() {
  pinMode(RPS_INPUT, INPUT);
  pinMode(RPS_OUTPUT, OUTPUT);
  motor_setup();

  elbowMotor.moveTo(2000);
}

void loop() {
  /*
  if (!digitalRead(RPS_INPUT)) {
    rps();
  }
  */
  
  elbowMotor.run();


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
