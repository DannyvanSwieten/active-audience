#include "ActiveAudience.h"
#include "Arduino.h"

ActiveAudience::ActiveAudience(byte ldrPin, byte capacitorPin, byte wheelPin, byte piezoPin)
{
	_ldrPin 		= ldrPin;
	_capacitorPin 	= capacitorPin;
	_wheelPin 		= wheelPin;
	_piezoPin 		= piezoPin;
}


	void ActiveAudience::writeLdrValueToMax()
	{
  		double value;
  		value = analogRead(_ldrPin);
  		Serial.print(value);
  		Serial.print(" ");
	};

	void ActiveAudience::writeCapacitorValueToMax()
	{
  		double value;
  		value = analogRead(_capacitorPin);
  		Serial.print(value);
  		Serial.print(" ");
	};

	void ActiveAudience::writeWheelValueToMax()
	{
  		double value;
  		value = analogRead(_wheelPin);
  		Serial.print(value);
  		Serial.print(" ");
	};
	void ActiveAudience::writePiezoValueToMax()
	{
  		double value;
  		value = analogRead(_piezoPin);
  		Serial.print(value);
  		Serial.print(" ");
	};