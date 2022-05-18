#include <stdio.h>
#include "test.h"

int CheckBatteryStatus(float temperature, float soc, float chargeRate) {
  printf("Temperature ");
  int isTemperatureInvalid = checklimit(temperature,0,45);
  int isTempApproachinglimit = warning(temperature,0,45);
  (isTempApproachinglimit==1) ? printf("Warning: Battery Temperature approaching lower limit\n") : ((isTempApproachinglimit==2)? printf("Warning: Battery Temperature approaching higher limit\n") : printf(""));
  //if(isTempApproachinglimit==1)
    //printf("Warning: Battery Temperature approaching lower limit\n");
  //else if (isTempApproachinglimit==2)
    //printf("Warning: Battery Temperature approaching higher limit\n");
  printf("State of Charge ");
  int isSocInvalid = checklimit(soc,20,80);
  int isSocApproachinglimit = warning(soc,20,80);
  if(isSocApproachinglimit==1)
    printf("Warning: Battery Approaching discharge\n");
  else if (isSocApproachinglimit==2)
    printf("Warning: Battery Approaching charge-peak\n");
  printf("Charge Rate ");
  int isChargerateInvalid= checklimit(chargeRate,0,0.8);
  int isChargerateApproachinglimit = warning(chargeRate,0,0.8);
  if(isChargerateApproachinglimit==1)
    printf("Warning: Battery Charge rate approaching lower limit\n");
  else if (isChargerateApproachinglimit==2)
    printf("Warning: Battery Charge rate approaching higher limit\n");
  int invalid = isTemperatureInvalid||isSocInvalid||isChargerateInvalid;
  return invalid;
}

int main() {
  test();
  return 0;
}

 
    
  
  
