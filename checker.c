#include <stdio.h>
#include <assert.h>

int warning(float value,float minlimit,float maxlimit)
{
  float tolerance=(5.000000/100.000000)*maxlimit;
  if (value == minlimit||value == minlimit+tolerance) {
    printf("Low limit warning\n");
    return 1;
    }
  else if (value == maxlimit||value == maxlimit-tolerance){
    printf("High limit warning\n");
    return 2;
    }
  else
    return 0;
}

int checklimit(float value,float minlimit,float maxlimit)
{
  int alertcount=0;
  if (value < minlimit) {
    printf("value is below the limit\n");
    alertcount=1;
  }
  else if (value > maxlimit){
    printf("value is above the limit\n");
    alertcount=1;
  }
  else
  {
    printf("value is within range\n");
  }
 return alertcount;
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
  printf("Temperature ");
  int isTemperatureInvalid = checklimit(temperature,0,45);
  int isTempApproachinglimit = warning(temperature,0,45);
  printf("%d\n",isTempApproachinglimit);
  if(isTempApproachinglimit==1)
    printf("Warning: Approaching discharge\n");
  else if (isTempApproachinglimit==2)
    printf("Warning: Approaching charge-peak\n");
  printf("State of Charge ");
  int isSocInvalid = checklimit(soc,20,80);
  printf("Charge Rate ");
  int isChargerateInvalid= checklimit(chargeRate,0,0.8);
  int invalid = isTemperatureInvalid||isSocInvalid||isChargerateInvalid;
  return invalid;
}

int main() {
  printf("Check 1\n");
  assert(batteryIsOk(23, 70, 0.7)==0);
  printf("\nCheck 2\n");
  assert(batteryIsOk(46, 81, 0.9)==1);
  printf("\nCheck 3\n");
  assert(batteryIsOk(-1, 19, -1)==1);
  printf("\nCheck 4\n");
  assert(batteryIsOk(30, 50, 0.4)==0);
  printf("\nCheck 5\n");
  assert(batteryIsOk(35, 55, 0.3)==0);
  printf("\nCheck 6\n");
  assert(batteryIsOk(-10, 65, 1.0)==1);
  printf("\nCheck 7\n");
  assert(batteryIsOk(-20, 90, 0.6)==1);
  printf("\nCheck 8\n");
  assert(batteryIsOk(-40, 24, 0.5)==1);
  printf("\nCheck 9\n");
  assert(batteryIsOk(43, 24, 0.5)==0);
}

 
    
  
  
