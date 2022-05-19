void printtempwarningL1(int isTempApproachingLimit)
{
(isTempApproachingLimit==1) ? printf("Warning: Battery Temperature approaching lower limit\n") : ((isTempApproachingLimit==2)? printf("Warning: Battery Temperature approaching higher limit\n") : printf("No early warning for temperature\n"));
}

void printtempwarningL2(int isTempApproachingLimit)
{
(isTempApproachingLimit==1) ? printf("Warnung: Batterietemperatur nähert sich dem unteren Grenzwert\n") : ((isTempApproachingLimit==2)? printf("Warnung: Batterietemperatur nähert sich dem oberen Grenzwert\n") : printf("Keine Frühwarnung für Temperature\n"));
}


void printsocwarningL1(int isSocApproachingLimit)
{
(isSocApproachingLimit==1) ? printf("Warning: Battery Approaching discharge\n") : ((isSocApproachingLimit==2)? printf("Warning: Warning: Battery Approaching charge-peak\n") : printf("No early warning for SOC\n"));
}

void printsocwarningL2(int isSocApproachingLimit)
{
(isSocApproachingLimit==1) ? printf("Warnung: Batterie fast entladen\n") : ((isSocApproachingLimit==2)? printf("Warnung: Batterie nähert sich der Ladespitze\n") : printf("Keine Frühwarnung für SOC\n"));
}

void printchargeratewarningL1(int isChargerateApproachingLimit)
{
(isChargerateApproachingLimit==1) ? printf("Warning: Battery Charge rate approaching lower limit\n") : ((isChargerateApproachingLimit==2)? printf("Warning: Battery Charge rate approaching higher limit\n") : printf("No early warning for charge rate\n"));
}

void printchargeratewarningL2(int isChargerateApproachingLimit)
{
(isChargerateApproachingLimit==1) ? printf("Warnung: Batterieladerate nähert sich dem unteren Grenzwert\n") : ((isChargerateApproachingLimit==2)? printf("Warnung: Batterieladerate nähert sich dem oberen Limit\n") : printf("Keine Frühwarnung für den Gebührensatz\n"));
}

