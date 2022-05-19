#include <stdio.h>
#include "test.h"

int isTemperatureInvalid(float temperature)
{
  if(l==1)
  printf("Temperature ");
  if(l==2)
  printf("Temperatur ");
  int isTemperatureInvalid = isValuebreached(temperature,0,45);
  return isTemperatureInvalid;
}
  
int isSocInvalid(float soc)
{
  if(l==1)
  printf("State of Charge ");
  if(l==2)
  printf("Ladezustand ");
  int isSocInvalid = isValuebreached(soc,20,80);
  return isSocInvalid;
}
  
int isChargerateInvalid(float chargeRate)
{
  if(l==1)
  printf("Charge Rate ");
  if(l==2)
  printf("Ladestrom ");
  int isChargerateInvalid = isValuebreached(chargeRate,0,0.8);
  return isChargerateInvalid;
}

int CheckBatteryStatus(float temperature, float soc, float chargeRate) {
  int isTemperatureinvalid = isTemperatureInvalid(temperature);
  int isSocinvalid = isSocInvalid(soc);
  int isChargerateinvalid = isChargerateInvalid(chargeRate);
  int invalid = isTemperatureinvalid||isSocinvalid||isChargerateinvalid;
  earlywarning(invalid,temperature,soc,chargeRate);
  return invalid;
 }

int main() {
  l=1;
  test();
  printf("\n");
  l=2;
  test();
  return 0;
}

 
    
  
  
