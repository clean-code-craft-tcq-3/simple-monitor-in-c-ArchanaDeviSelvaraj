#include <stdio.h>
int CheckBatteryStatus(float temperature, float soc, float chargeRate);
int warning(float value,float minlimit,float maxlimit);
int checklimit(float value,float minlimit,float maxlimit);
void printwarning(float temperature, float soc, float chargeRate);
void earlywarning(int invalid,float temperature, float soc, float chargeRate);
