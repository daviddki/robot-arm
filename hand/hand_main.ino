#include "hand_main.hpp"
#include "fingers.hpp"
#include <stdlib.h>

void setup() {
  pinMode(RPS_INPUT, INPUT);
}

void rock() {
  close_finger(finger0);
  close_finger(finger1);
  close_finger(finger2);
}

void paper() {
  open_finger(finger0);
  open_finger(finger1);
  open_finger(finger2);
}

void scissors() {
  close_finger(finger0);
  open_finger(finger1);
  open_finger(finger2);
}

void rps() {
  //wait for rps() on arm
  //see if u can do some handshaking thing where rps() on arm sends a signal after its done
  int action = rand() % 3;
  switch (action) {
    case 0:
      rock();
    case 1:
      paper();
    case 2:
      scissors();
  }
}

int main() {
  motor_setup();
  setup();
  while (1) {
    if (RPS_INPUT == 1) {
      rps();
    }
  }
  return 0;
}
