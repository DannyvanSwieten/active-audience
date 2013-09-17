#include <ActiveAudience.h>

ActiveAudience* aa = new ActiveAudience(1,2,3,4);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available())
  {
   aa->writeLdrValueToMax();
   aa->writeCapacitorValueToMax();
   aa->writeWheelValueToMax();
   aa->writePiezoValueToMax();
  }
}
