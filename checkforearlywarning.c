#include "batterymanagement.h"
void earlywarning(int invalid,float temperature, float soc, float chargeRate)
{
  if(invalid!=1)
  {
  printf("Though values are within range, check for early warning if any\n");
  printbatterystatus(temperature,soc,chargeRate);
  }
  else
  printf("Battery status not okay\n");
}
