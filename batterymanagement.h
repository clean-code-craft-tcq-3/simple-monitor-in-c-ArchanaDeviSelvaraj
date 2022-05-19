#include <stdio.h>
enum languages{English=1,German=2};
enum languages l;
int CheckBatteryStatus(float temperature, float soc, float chargeRate);
int warning(float value,float minlimit,float maxlimit);
int isValuebreached(float value,float minlimit,float maxlimit);
void printbatterystatus(float temperature, float soc, float chargeRate);
void earlywarning(int invalid,float temperature, float soc, float chargeRate);
