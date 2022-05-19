#include <stdio.h>
enum languages{English=1,German=2};
enum languages l;
int CheckBatteryStatus(float temperature, float soc, float chargeRate);
int warning(float value,float minlimit,float maxlimit);
int isValuebreached(float value,float minlimit,float maxlimit);
void printbatterystatus(float temperature, float soc, float chargeRate);
void earlywarning(int invalid,float temperature, float soc, float chargeRate);
void printtempwarningL1(int isTempApproachingLimit);
void printtempwarningL2(int isTempApproachingLimit);
void printsocwarningL1(int isSocApproachingLimit);
void printsocwarningL2(int isSocApproachingLimit);
void printchargeratewarningL1(int isChargerateApproachingLimit);
void printchargeratewarningL2(int isChargerateApproachingLimit);
void printmessage();
void printbatterystatusnotokay();
void printlowlimitbreach();
void printhighlimitbreach();
void printnobreach();
