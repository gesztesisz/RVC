#include "movement.h"

movement::movement(){
  analogWrite( right_Forward  , 0 );
  analogWrite( right_Backward , 0 );
  analogWrite( left_Forward   , 0 );
  analogWrite( left_Backward  , 0 );
}
void movement::base_move(const int rF, const int rB, const int lF, const int lB){
  analogWrite( right_Forward  , lB );
  analogWrite( right_Backward , lF );
  analogWrite( left_Forward   , rB );
  analogWrite( left_Backward  , rF );
}
void movement::stopping(){
  base_move(0,0,0,0);
}
void movement::forward(){
  base_move(50,0,50,0);
}
void movement::backward(){
  base_move(0,50,0,50);
}
void movement::left(){
  base_move(50,0,0,0);
}
void movement::right(){
  base_move(0,0,50,0);
}  
