#ifndef PULSECOUNTER_H_
#define PULSECOUNTER_H_
class PulseCounter{
public:
	PulseCounter();
	//Counts one pulse
	void countOnePulse();
	//Measures the frequence of pulses from last measure.
	double measurePulseFrequence();
private:
	//Returns the time from last measure.
	long getTimeDifference();
	//Returns the number of pulses since last measure.
	int getNumberOfPulses();
	int _timeSinceLastMeasure;
	int _numberOfPulses;
};
#endif
