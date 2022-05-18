#include <stdio.h>
#include "test.h"

enum languages{English=1,German=2};
enum languages l;

int TempCheck(float temperature)
{
  if(l==1)
  printf("Temperature ");
  if(l==2)
  printf("Temperatur ");
  int isTemperatureInvalid = checkvaluebreach(temperature,0,45);
  return isTemperatureInvalid;
}
  
int SocCheck(float soc)
{
  if(l==1)
  printf("State of Charge ");
  if(l==2)
  printf("Ladezustand ");
  int isSocInvalid = checkvaluebreach(soc,20,80);
  return isSocInvalid;
}
  
int ChargerateCheck(float soc)
{
  if(l==1)
  printf("Charge Rate ");
  if(l==2)
  printf("Ladestrom ");
  int isChargerateInvalid = checkvaluebreach(soc,20,80);
  return isChargerateInvalid;
}

int CheckBatteryStatus(float temperature, float soc, float chargeRate) {
  int invalid=0;
  int isTemperatureInvalid = TempCheck(temperature);
  int isSocInvalid = SocCheck(soc);
  int isChargerateInvalid = ChargerateCheck(chargeRate);
  int invalid = isTemperatureInvalid||isSocInvalid||isChargerateInvalid;
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

 
    
  
  
