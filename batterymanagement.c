#include <stdio.h>
#include "test.h"

enum languages{English=1,German=2};
enum languages l;

int CheckBatteryStatus(float temperature, float soc, float chargeRate) {
  int isTemperatureInvalid=0;
  int isSocInvalid=0;
  int isChargerateInvalid=0;
  int invalid=0;
  if(l==1){
  printf("Temperature ");
  isTemperatureInvalid = checkvaluebreach(temperature,0,45);
  printf("State of Charge ");
  isSocInvalid = checkvaluebreach(soc,20,80);
  printf("Charge Rate ");
  }
  if(l==2){
  printf("Temperatur ");
  isTemperatureInvalid = checkvaluebreach(temperature,0,45);
  printf("Ladezustand ");
  isSocInvalid = checkvaluebreach(soc,20,80);
  printf("Ladestrom ");
  } 
  isChargerateInvalid= checkvaluebreach(chargeRate,0,0.8);
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

 
    
  
  
