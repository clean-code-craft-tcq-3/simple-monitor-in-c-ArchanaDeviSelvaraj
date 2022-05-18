#include <stdio.h>
#include "test.h"

int CheckBatteryStatus(float temperature, float soc, float chargeRate) {
  printf("Temperature ");
  int isTemperatureInvalid = checklimit(temperature,0,45);
  printf("State of Charge ");
  int isSocInvalid = checklimit(soc,20,80);
  printf("Charge Rate ");
  int isChargerateInvalid= checklimit(chargeRate,0,0.8);
  int invalid = isTemperatureInvalid||isSocInvalid||isChargerateInvalid;
  return invalid;
}

int main() {
  test();
  return 0;
}

 
    
  
  
