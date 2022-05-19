#include <stdio.h>
int isValuebreached(float value,float minlimit,float maxlimit)
{
  int alertcount=0;
  if (value < minlimit) {
    if(l==1)
    printf("value is below the limit\n");
    if(l==2)
    printf("Der Wert liegt unter dem Grenzwert\n");
    alertcount=1;
    // alertcount=1 means value breached
  }
  else if (value > maxlimit){if(l==1)
    if(l==1)
    printf("value is above the limit\n");
    if(l==2) 
    printf("Der Wert liegt über dem Limit\n");
    alertcount=1;
    // alertcount=1 means value breached
  }
  else
  {
    printf("value is within range\n");
    // alertcount=0 means value within range
  }
 return alertcount;
}
