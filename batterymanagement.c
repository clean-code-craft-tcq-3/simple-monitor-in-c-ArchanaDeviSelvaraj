#include <stdio.h>
#include "test.h"

enum languages{English=1,German=2};
enum languages l;

int CheckBatteryStatus(float temperature, float soc, float chargeRate) {
  (l==1)?printf("Temperature "):printf("Temperatur ");
  int isTemperatureInvalid = checkvaluebreach(temperature,0,45);
  (l==1)?printf("State of Charge "):printf("Ladezustand ");
  int isSocInvalid = checkvaluebreach(soc,20,80);
  (l==1)?printf("Charge Rate "):printf("Ladestrom ");
  int isChargerateInvalid= checkvaluebreach(chargeRate,0,0.8);
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

 
    
  
  
