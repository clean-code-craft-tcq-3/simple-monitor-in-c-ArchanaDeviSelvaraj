#include "batterymanagement.h"

void printtempwarning(float temperature)
{
int isTempApproachinglimit = warning(temperature,0,45);
(isTempApproachinglimit==1) ? printf("Warning: Battery Temperature approaching lower limit\n") : ((isTempApproachinglimit==2)? printf("Warning: Battery Temperature approaching higher limit\n") : printf("No early warning for temperature\n"));
}
void printsocwarning(float soc)
{
int isSocApproachinglimit = warning(soc,20,80);
(isSocApproachinglimit==1) ? printf("Warning: Battery Approaching discharge\n") : ((isSocApproachinglimit==2)? printf("Warning: Battery Approaching charge-peak\n") : printf("No early warning for SOCz\n"));
}
void printchargeRatewarning(float chargeRate)
{
int isChargerateApproachinglimit = warning(chargeRate,0,0.8);
(isChargerateApproachinglimit==1) ? printf("Warning: Battery Charge rate approaching lower limit\n") : ((isChargerateApproachinglimit==2)? printf("Warning: Battery Charge rate approaching higher limit\n") : printf("No early warning for charge rate\n"));
}     

void printbatterystatus(float temperature, float soc, float chargeRate)
{
printtempwarning(temperature);
printsocwarning(soc);
printchargeRatewarning(chargeRate);
}


