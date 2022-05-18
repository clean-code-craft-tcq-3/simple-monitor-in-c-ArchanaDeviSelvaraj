#include <stdio.h>
#include "test.h"

enum languages{English=1,German=2};
enum languages l;
int isTemperatureInvalid=0;
int isSocInvalid=0;
int isChargerateInvalid=0;

int TempCheck(float temperature)
{
  if(l==1)
  printf("Temperature ");
  if(l==2)
  printf("Temperatur ");
  isTemperatureInvalid = checkvaluebreach(temperature,0,45);
  return isTemperatureInvalid;
}
  
int SocCheck(float soc)
{
  if(l==1)
  printf("State of Charge ");
  if(l==2)
  printf("Ladezustand ");
  isSocInvalid = checkvaluebreach(soc,20,80);
  return isSocInvalid;
}
  
int ChargerateCheck(float soc)
{
  if(l==1)
  printf("Charge Rate ");
  if(l==2)
  printf("Ladestrom ");
  isChargerateInvalid = checkvaluebreach(soc,20,80);
  return isChargerateInvalid;
}

int CheckBatteryStatus(float temperature, float soc, float chargeRate) {
  int invalid=0;
  isTemperatureInvalid = TempCheck(temperature);
  isSocInvalid = SocCheck(soc);
  isChargerateInvalid = ChargerateCheck(chargeRate);
  invalid = isTemperatureInvalid||isSocInvalid||isChargerateInvalid;
  earlywarning(invalid,temperature,soc,chargeRate);
  return invalid;
 }

int main() {
  l=1;
  test();
  l=2;
  test();
  return 0;
}

 
    
  
  
