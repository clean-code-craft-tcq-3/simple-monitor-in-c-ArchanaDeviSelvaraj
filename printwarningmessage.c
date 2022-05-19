void printtempwarningL1(int isTempApproachingLimit)
{
(isTempApproachingLimit==1) ? printf("Warning: Battery Temperature approaching lower limit\n") : ((isTempApproachingLimit==2)? printf("Warning: Battery Temperature approaching higher limit\n") : printf("No early warning for temperature\n"));
}

void printtempwarningL2(int isTempApproachingLimit)
{
(isTempApproachingLimit==1) ? printf("Warnung: Batterietemperatur nähert sich dem unteren Grenzwert\n") : ((isTempApproachingLimit==2)? printf("Warnung: Batterietemperatur nähert sich dem oberen Grenzwert\n") : printf("Keine Frühwarnung für Temperature\n"));
}

