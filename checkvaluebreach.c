#include <stdio.h>
int isValuebreached(float value,float minlimit,float maxlimit)
{
  int alertcount=0;
  if (value < minlimit) {
    printf("value is below the limit\n");
    alertcount=1;
    // alertcount=1 means value breached
  }
  else if (value > maxlimit){
    printf("value is above the limit\n");
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
