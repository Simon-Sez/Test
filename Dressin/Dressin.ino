#include "PulseCounter.h"

PulseCounter c;

void setup(){
  attachInterrupt(0,countPulse,FALLING);
}

void countPulse(){
  c.countOnePulse();
}

void loop(){  
  int val = c.measurePulseFrequence();
  Serial.print("Frequence: ");
  Serial.println(val);
  delay(10);
}


