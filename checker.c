#include <stdio.h>
#include <assert.h>

int alertcount=0;

int tempcheck(float temperature)
{
  if(temperature < 0 || temperature > 45) 
  {
    printf("Temperature out of range!\n");
    return alertcount++;
  }
 }
  
int soccheck(float soc)
{
  if(soc < 20 || soc > 80) 
  {
    printf("State of Charge out of range!\n");
    return alertcount++;
  }
 }

int chargeRatecheck(float chargeRate)
{
    if(chargeRate > 0.8) 
    {
    printf("Charge Rate out of range!\n");
    return alertcount++;
    }
 }
    

int batteryIsOk(float temperature, float soc, float chargeRate) {
  alertcount = tempcheck(temperature);
  alertcount = soccheck(soc);
  alertcount = chargeRatecheck(chargeRate);
  return alertcount;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}

 
    
  
  
