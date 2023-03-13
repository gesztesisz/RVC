#ifndef UASC_H
#define UASC_H

#include <Arduino.h>

#define trig_pin 12
#define echo_pin 13

class uasc{
private:
  bool uasc_enabled;
  
  unsigned long timer = millis();
  float avg;
  unsigned int counter;
  long duration;
  float distance;
public:
  uasc();
  void measure();
  float calculate();
  void params_to_zero();

  void set_timer();
  unsigned long get_timer();

  void set_uasc_enabled(const bool);
  bool get_uasc_enabled();
};


#endif
