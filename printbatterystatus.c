#include "batterymanagement.h"

void printtempwarningL1(int isTempApproachingLimit)
{
(isTempApproachingLimit==1) ? printf("Warning: Battery Temperature approaching lower limit\n") : ((isTempApproachingLimit==2)? printf("Warning: Battery Temperature approaching higher limit\n") : printf("No early warning for temperature\n"));
}

void printtempwarningL2(int isTempApproachingLimit)
{
(isTempApproachingLimit==1) ? printf("Warnung: Batterietemperatur nähert sich dem unteren Grenzwert\n") : ((isTempApproachingLimit==2)? printf("Warnung: Batterietemperatur nähert sich dem oberen Grenzwert\n") : printf("Keine Frühwarnung für Temperature\n"));
}

void printtempwarning(int isTempApproachingLimit)
{
if(l==1)
printtempwarningL1(isTempApproachingLimit);
if(l==2)
printtempwarningL2(isTempApproachingLimit);
}

void isTempApproachinglimit(float temperature)
{
int isTempApproachingLimit = warning(temperature,0,45);
printtempwarning(isTempApproachingLimit);
}
void isSocApproachinglimit(float soc)
{
int isSocApproachingLimit = warning(soc,20,80);
(isSocApproachinglimit==1) ? printf("Warning: Battery Approaching discharge\n") : ((isSocApproachinglimit==2)? printf("Warning: Battery Approaching charge-peak\n") : printf("No early warning for SOCz\n"));
}
void isChargerateApproachinglimit(float chargeRate)
{
int isChargerateApproachingLimit = warning(chargeRate,0,0.8);
(isChargerateApproachinglimit==1) ? printf("Warning: Battery Charge rate approaching lower limit\n") : ((isChargerateApproachinglimit==2)? printf("Warning: Battery Charge rate approaching higher limit\n") : printf("No early warning for charge rate\n"));
}     

void printbatterystatus(float temperature, float soc, float chargeRate)
{
isTempApproachinglimit(temperature);
isSocApproachinglimit(soc);
isChargerateApproachinglimit(chargeRate);
}


