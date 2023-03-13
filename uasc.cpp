#include "uasc.h"

uasc::uasc(){
  avg = 0.0;
  counter = 0;
  uasc_enabled = true;
}
void uasc::measure(){
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(10);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);
  duration = pulseIn(echo_pin, HIGH);
  distance = duration * 0.034 / 2;
  
  avg += distance;
  ++counter;  
}
float uasc::calculate(){
  return avg/counter;
}
void uasc::params_to_zero(){
  avg = 0.0;
  counter = 0;
}
void uasc::set_timer(){
  timer = millis();
}
unsigned long uasc::get_timer(){
  return timer;
}
void uasc::set_uasc_enabled(const bool v){
  uasc_enabled = v;
}
bool uasc::get_uasc_enabled(){
  return uasc_enabled;
}
