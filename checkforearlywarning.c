#include "batterymanagement.h"

void printmessage()
{
    if(l==1)
    printf("Though values are within range, check for early warning if any\n");
    if(l==2)
    printf("Obwohl die Werte innerhalb des Bereichs liegen, überprüfen Sie gegebenenfalls die Frühwarnung\n");
}
  
void earlywarning(int invalid,float temperature, float soc, float chargeRate)
{
  if(invalid!=1)
  {
   printmessage(); 
   printbatterystatus(temperature,soc,chargeRate);
  }
  else
  {
      if(l==1)
      printf("Battery status not okay\n");
      if(l==2)
      printf("Batteriestatus nicht in Ordnung\n");
  }
}
