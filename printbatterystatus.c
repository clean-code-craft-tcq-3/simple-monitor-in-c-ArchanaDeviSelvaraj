#include "batterymanagement.h"

void printtempwarning(int isTempApproachingLimit)
{
if(l==1)
printtempwarningL1(isTempApproachingLimit);
if(l==2)
printtempwarningL2(isTempApproachingLimit);
}

void printsocwarning(int isSocApproachingLimit)
{
if(l==1)
printsocwarningL1(isSocApproachingLimit);
if(l==2)
printsocwarningL2(isSocApproachingLimit);
}

void printchargeratewarning(int isChargerateApproachingLimit)
{
if(l==1)
printchargeratewarningL1(isChargerateApproachingLimit);
if(l==2)
printchargeratewarningL2(isChargerateApproachingLimit);
}

void isTempApproachinglimit(float temperature)
{
int isTempApproachingLimit = warning(temperature,0,45);
printf("%d\n",isTempApproachingLimit);
printtempwarning(isTempApproachingLimit);
}
void isSocApproachinglimit(float soc)
{
int isSocApproachingLimit = warning(soc,20,80);
printsocwarning(isSocApproachingLimit);
}
void isChargerateApproachinglimit(float chargeRate)
{
int isChargerateApproachingLimit = warning(chargeRate,0,0.8);
printchargeratewarning(isChargerateApproachingLimit);
}     

void printbatterystatus(float temperature, float soc, float chargeRate)
{
isTempApproachinglimit(temperature);
isSocApproachinglimit(soc);
isChargerateApproachinglimit(chargeRate);
}


