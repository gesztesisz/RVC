#include "movement.h"

// Objects ------------------------------------------------------
movement mov;

// Global variables ---------------------------------------------
int mode = 0;

void setup() {
  pinMode( right_Forward  , OUTPUT );
  pinMode( right_Backward , OUTPUT );
  pinMode( left_Forward   , OUTPUT );
  pinMode( left_Backward  , OUTPUT );
}

void loop() {
  switch(mode){
    case 0: 
      mov.forward();
      ++mode;
      delay(1000);
      break;
    case 1: 
      mov.backward();
      ++mode;
      delay(1000);
      break;
    case 2: 
      mov.left();
      ++mode;
      delay(1000);    
      break;
    case 3: 
      mov.right();
      ++mode;
      delay(1000);    
      break;
    case 4: 
      mov.stopping();
      ++mode;
      delay(1000);
      break;
    default: 
      mode = 0;
      break;
  }
}
