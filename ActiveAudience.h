#include "Arduino.h"

class ActiveAudience
{

public:

	ActiveAudience(byte ldrPin, byte capacitorPin, byte wheelPin, byte piezoPin);

	void writeLdrValueToMax();
	void writeCapacitorValueToMax();
	void writeWheelValueToMax();
	void writePiezoValueToMax();

	boolean  serialOn;

private:

	long ldrValue; 
	long cValue; 
	long wheelValue; 
	long piezoValue ;

	byte _ldrPin;
	byte _capacitorPin;
	byte _wheelPin;
	byte _piezoPin;

};