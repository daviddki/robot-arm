#include "hand_main.hpp"
#include "servo.hpp"
#include <stdlib.h>

void setup() {
  //pinMode(RPS_INPUT, INPUT);
  Serial.begin(9600);
  servoSetup();
}

void open_thumb() {

}

void open_fingers() {

}

void close_thumb() {

}

void close_fingers() {

}

/*
void rock() {
  close_thumb();
  close_fingers();
}

void paper() {
  open_thumb();
  open_fingers();
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
*/

void loop() {
  /*
  motor_setup();
  setup();
  while (1) {
    if (RPS_INPUT == 1) {
      rps();
    }
  }
  */
  
  Serial.println(1);
  int i = 0;
  for(; i < 90; ++i) {
    thumbUp.write(i);
  }
  delay(1000);
  for(; i < 180; ++i) {
    thumbUp.write(i);
  }
  delay(1000);
  for(; i > 0; --i) {
    thumbUp.write(i);
  }
  delay(1000);
  
  /*
  int i = 0;
  for (; i >-180; --i) {
    thumbUp.write(i);
  }
  */
}
