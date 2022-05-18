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
  printf("%d\n",isTemperatureInvalid);
  return isTemperatureInvalid;
}
  
int SocCheck(float soc)
{
  if(l==1)
  printf("State of Charge ");
  if(l==2)
  printf("Ladezustand ");
  int isSocInvalid = checkvaluebreach(soc,20,80);
  printf("%d\n",isSocInvalid);
  return isSocInvalid;
}
  
int ChargerateCheck(float chargeRate)
{
  if(l==1)
  printf("Charge Rate ");
  if(l==2)
  printf("Ladestrom ");
  int isChargerateInvalid = checkvaluebreach(chargeRate,0,0.8);
  printf("%d\n",isChargerateInvalid);
  return isChargerateInvalid;
}

int CheckBatteryStatus(float temperature, float soc, float chargeRate) {
  int isTemperatureInvalid = TempCheck(temperature);
  printf("%d/n",isTemperatureInvalid);
  int isSocInvalid = SocCheck(soc);
  printf("%d\n",isSocInvalid);
  int isChargerateInvalid = ChargerateCheck(chargeRate);
  printf("%d\n",isChargerateInvalid);
  int invalid = isTemperatureInvalid||isSocInvalid||isChargerateInvalid;
  printf("%d\n",invalid);
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

 
    
  
  
