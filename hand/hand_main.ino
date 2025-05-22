#include "hand_main.hpp"
#include "servo.hpp"
#include <stdlib.h>

int thumbPos = 180;
int fingersPos = 180;

void open_thumb() {
  if (thumbPos == 0) {
    for(; thumbPos > 0; --thumbPos) {
      thumbUp.write(thumbPos);
      thumbDown.write(thumbPos);
    }
  }
}

void open_fingers() {
  if (fingersPos == 0) {
    for(; fingersPos > 0; --fingersPos) {
      fingersUp.write(fingersPos);
      fingersDown.write(fingersPos);
    }
  }
}

void close_thumb() {
  if (thumbPos != 0) {
    for(; thumbPos < 180; ++thumbPos) {
      thumbUp.write(thumbPos);
      thumbDown.write(thumbPos);
    }
  }
}

void close_fingers() {
  if (fingersPos != 0) {
    for(; fingersPos < 180; ++fingersPos) {
      fingersUp.write(fingersPos);
      fingersDown.write(fingersPos);
    }
  }
}


void rock() {
  close_thumb();
  close_fingers();
}

void paper() {
  open_thumb();
  open_fingers();
}

void scissors() {
  open_fingers();
  close_thumb();
}

void rps() {
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

void setup() {
  pinMode(RPS_INPUT, INPUT);
  servoSetup();
    for(int i = 0; i < 180; ++i) {
      fingersUp.write(i);
      fingersDown.write(i);
      thumbUp.write(i);
      thumbDown.write(i);
    }
}

void loop() {

  if (RPS_INPUT == 1) {
    rps();
  }
  
  /*
  int i = 0;
  for(; i < 90; ++i) {
    fingersUp.write(i);
    fingersDown.write(i);
  }
  delay(1000);
  for(; i < 180; ++i) {
    fingersUp.write(i);
    fingersDown.write(i);
  }
  delay(1000);
  for(; i > 0; --i) {
    fingersUp.write(i);
    fingersDown.write(i);
  }
  delay(1000);
 */
}
