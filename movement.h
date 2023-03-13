#ifndef MOVEMENT_H
#define MOVEMENT_H 

#include <Arduino.h>

#define right_Forward   3
#define right_Backward  5
#define left_Forward    6
#define left_Backward   9

class movement{
public:
  movement();
  void base_move(const int, const int, const int, const int);
  void stopping();
  void forward();
  void backward();
  void left();
  void right();
};

#endif // MOVEMENT_H
