#include "batterymanagement.h"


int warning(float value,float minlimit,float maxlimit)
{
  float tolerance=(5.000000/100.000000)*maxlimit;
  if(minlimit<=value<=(minlimit+tolerance))
    return 1;
    //1-Approaching lower limit
  if((maxlimit-tolerance)<=value<=maxlimit)
    return 2;
    //2-Approaching upper limit
  else
    return 0;
  //0-No warning  
}

void printmessage()
{
    if(l==1)
    printf("Though values are within range, check for early warning if any\n");
    if(l==2)
    printf("Obwohl die Werte innerhalb des Bereichs liegen, überprüfen Sie gegebenenfalls die Frühwarnung\n");
}

void printbatterystatusnotokay()
{
      if(l==1)
      printf("Battery status not okay\n");
      if(l==2)
      printf("Batteriestatus nicht in Ordnung\n");
}
  
void earlywarning(int invalid,float temperature, float soc, float chargeRate)
{
  if(invalid!=1)
  {
   printmessage(); 
   printbatterystatus(temperature,soc,chargeRate);
  }
  else
  printbatterystatusnotokay();
}
