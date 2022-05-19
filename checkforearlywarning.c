#include "batterymanagement.h"
void earlywarning(int invalid,float temperature, float soc, float chargeRate)
{
  if(invalid!=1)
  {
    if(l==1)
    printf("Though values are within range, check for early warning if any\n");
    if(l==2)
    printf("Obwohl die Werte innerhalb des Bereichs liegen, überprüfen Sie gegebenenfalls die Frühwarnung\n");
  printbatterystatus(temperature,soc,chargeRate);
  }
  else
  printf("Battery status not okay\n");
}
