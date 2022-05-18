#include "batterymanagement.h"
void printwarning(float temperature, float soc, float chargeRate)
{
int isTempApproachinglimit = warning(temperature,0,45);
(isTempApproachinglimit==1) ? printf("Warning: Battery Temperature approaching lower limit\n") : ((isTempApproachinglimit==2)? printf("Warning: Battery Temperature approaching higher limit\n") : printf(""));
int isSocApproachinglimit = warning(soc,20,80);
(isSocApproachinglimit==1) ? printf("Warning: Battery Approaching discharge\n") : ((isSocApproachinglimit==2)? printf("Warning: Battery Approaching charge-peak\n") : printf(""));
int isChargerateApproachinglimit = warning(chargeRate,0,0.8);
(isChargerateApproachinglimit==1) ? printf("Warning: Battery Charge rate approaching lower limit\n") : ((isSocApproachinglimit==2)? printf("Warning: Battery Charge rate approaching higher limit\n") : printf(""));
}     
