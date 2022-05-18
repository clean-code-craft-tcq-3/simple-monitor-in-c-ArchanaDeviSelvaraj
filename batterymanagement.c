#include <stdio.h>
#include "test.h"

int CheckBatteryStatus(float temperature, float soc, float chargeRate) {
  printf("Temperature ");
  int isTemperatureInvalid = checkvaluebreach(temperature,0,45);
  printf("State of Charge ");
  int isSocInvalid = checkvaluebreach(soc,20,80);
  printf("Charge Rate ");
  int isChargerateInvalid= checkvaluebreach(chargeRate,0,0.8);
  int invalid = isTemperatureInvalid||isSocInvalid||isChargerateInvalid;
  printf("%d\n",invalid);
  earlywarning(invalid,temperature,soc,chargeRate);
  return invalid; 
}

int main() {
  test();
  return 0;
}

 
    
  
  
