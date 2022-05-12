#include <stdio.h>
#include <assert.h>

int alertcount=0;

int checklimit(float value,float minlimit,float maxlimit)
{
  alertcount=0;
  if (value < minlimit) {
    printf("value is below the limit\n");
    alertcount=1;
  }
  else if (value > maxlimit){
    printf("value is above the limit\n");
    alertcount=1;
  }
  else
    printf("value is within range\n");
 return alertcount;
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
  printf("Temperature ");
  alertcount = checklimit(temperature,0,45);
  printf("State of Charge ");
  alertcount = checklimit(soc,20,80);
  printf("Charge Rate ");
  alertcount = checklimit(chargeRate,0,0.8);
  if(alertcount==1)
    printf("Battery's condition is not okay\n");
  else
    printf("Battery's condition is okay\n");
  return alertcount;
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
  assert(batteryIsOk(30, 50, 0.4)==0);
  printf("\nCheck 6\n");
  assert(batteryIsOk(-10, 65, 1.0)==1);
}

 
    
  
  
