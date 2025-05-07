#include "main.hpp"
#include "motor.hpp"

void setup() {
  pinMode(RPS_INPUT, INPUT);
  pinMode(RPS_OUTPUT, OUTPUT);
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

int main() {
  motor_setup();
  setup();
  while (1) {
    if (RPS_INPUT == 0) {
      rps();
    }
  }
  return 0;
}
