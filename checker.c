#include <stdio.h>
#include <assert.h>

int alertcount=0;

int checklimit(float value,float minlimit,float maxlimit)
{
  if (value < minlimit) {
    printf("Below limit\n");
    alertcount=1;
  }
  else if (value > maxlimit){
    printf("Above limit\n");
    alertcount=1;
  }
  else
    printf("In range\n");
    return alertcount;
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
  printf("Temperature check\n");
  alertcount = checklimit(temperature,0,45);
  printf("State of Charge check\n");
  alertcount = checklimit(soc,20,80);
  printf("Charge Rate check\n");
  alertcount = checklimit(chargeRate,0,0.8);
  return alertcount;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7)==0);
  assert(batteryIsOk(50, 85, 0.9)==1);
  assert(batteryIsOk(-1, 15, -1)==1);
}

 
    
  
  
