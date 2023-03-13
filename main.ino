#include "movement.h"
#include "uasc.h"

// Objects ------------------------------------------------------
movement mov;
uasc uasc_obj;

// Global variables ---------------------------------------------
float dist = 0.0;
void setup() {
  pinMode( right_Forward  , OUTPUT );
  pinMode( right_Backward , OUTPUT );
  pinMode( left_Forward   , OUTPUT );
  pinMode( left_Backward  , OUTPUT );
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);

  delay(2000);
  uasc_obj.set_timer();
  //Serial.begin(9600);
}

void loop() {

  if ( millis() - uasc_obj.get_timer() >= 100 ){
    uasc_obj.set_timer();
      
    dist = uasc_obj.calculate();
    uasc_obj.params_to_zero();
  }
  else {
    uasc_obj.measure();
  }
  if(dist > 5.0){
    mov.forward();
  }
  else{
    mov.stopping();
  }
  //Serial.println(dist);
}
