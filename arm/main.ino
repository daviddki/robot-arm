#include "main.hpp"
#include "motor.hpp"

void setup() {
  Serial.begin(9600);
  Serial.println("0");
  Serial.println(elbowMotor.currentPosition());
  pinMode(RPS_INPUT, INPUT);
  pinMode(RPS_OUTPUT, OUTPUT);
  Serial.println("1");
  motor_setup();
  Serial.println("2");

  elbowMotor.moveTo(1000);
}

void loop() {
  /*
  if (!digitalRead(RPS_INPUT)) {
    rps();
  }
  */
  if (elbowMotor.distanceToGo() != 0) {
    Serial.println(elbowMotor.distanceToGo());
    elbowMotor.run();
  }

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
