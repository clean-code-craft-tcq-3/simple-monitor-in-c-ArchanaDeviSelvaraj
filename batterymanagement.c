#include <stdio.h>
#include "test.h"

enum languages{English,German};,
enum languages l;

int CheckBatteryStatus(float temperature, float soc, float chargeRate) {
  printf("Temperature ");
  int isTemperatureInvalid = checkvaluebreach(temperature,0,45);
  printf("State of Charge ");
  int isSocInvalid = checkvaluebreach(soc,20,80);
  printf("Charge Rate ");
  int isChargerateInvalid= checkvaluebreach(chargeRate,0,0.8);
  int invalid = isTemperatureInvalid||isSocInvalid||isChargerateInvalid;
  earlywarning(invalid,temperature,soc,chargeRate);
  return invalid; 
}

int main() {
  l="English";
  test();
  l="German";
  test();
  return 0;
}

 
    
  
  
