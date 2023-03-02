#include "movement.h"

void forward();
void backward();
void left();
void right();

int mode = 0;
movement movem;

void setup() {
  pinMode(right_forward ,OUTPUT );
  pinMode(right_backward,OUTPUT );
  pinMode(left_forward  ,OUTPUT );
  pinMode(left_backward ,OUTPUT );
  delay(2000);
}

void loop() {
  switch(mode){
    case 0:
      movem.forward();
      delay(2000);
      ++mode;
      break;
    case 1:
      movem.backward();
      delay(2000);
      ++mode;
      break;
    case 2:
      movem.left();
      delay(2000);
      ++mode;
      break;
    case 3:
      movem.right();
      delay(2000);
      ++mode;
      break;
    default:
      movem.stop();
      delay(2000);
      mode = 0;
      break;
  }
}