#include <stdio.h>
#include <assert.h>

int alertcount=0;

int batteryIsOk(float temperature, float soc, float chargeRate) {
  if(temperature < 0 || temperature > 45) {
    printf("Temperature out of range!\n");
    alertcount++;
  } 
  if(soc < 20 || soc > 80) {
    printf("State of Charge out of range!\n");
     alertcount++;
  } else if(chargeRate > 0.8) {
    printf("Charge Rate out of range!\n");
    alertcount++;
  }
  return alertcount;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7)=0);
  assert(batteryIsOk(50, 85, 0)>0);
}
