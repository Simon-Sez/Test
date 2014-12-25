#include "PulseCounter.h"
#include "Arduino.h"
PulseCounter::PulseCounter(){
	_timeSinceLastMeasure = 0;
	_numberOfPulses = 0;
}
void PulseCounter::countOnePulse(){
	_numberOfPulses++;
}
double PulseCounter::measurePulseFrequence(){
	long  nbrPulses = getNumberOfPulses();
	double diffTime = (double)getTimeDifference();
	double pulseFrequency = (double)nbrPulses/diffTime;
	return  pulseFrequency;
}
long PulseCounter::getTimeDifference(){
	long nowTime  = millis();
	long difference = nowTime - _timeSinceLastMeasure;
	_timeSinceLastMeasure = millis();
	return difference;
}

int PulseCounter::getNumberOfPulses(){
	int tmp  = _numberOfPulses;
	_numberOfPulses = 0;
	return tmp;
}


