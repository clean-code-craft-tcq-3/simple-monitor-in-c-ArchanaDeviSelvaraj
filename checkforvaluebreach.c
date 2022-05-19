#include <stdio.h>
#include "batterymanagement.h"

void printlowlimitbreach()
{
    if(l==1)
    printf("value is below the limit\n");
    if(l==2)
    printf("Der Wert liegt unter dem Grenzwert\n");
}
void printhighlimitbreach()
{
    if(l==1)
    printf("value is above the limit\n");
    if(l==2) 
    printf("Der Wert liegt über dem Limit\n");
}
void printnobreach()
{
      if(l==1)
      printf("value is within range\n");
      if(l==2) 
      printf("Wert liegt im Bereich\n");
}
int isValuebreached(float value,float minlimit,float maxlimit)
{
  int alertcount=0;
  if (value < minlimit) 
  {
    printlowlimitbreach();
    alertcount=1;
    // alertcount=1 means value breached
  }
  else if (value > maxlimit)
  {
    printhighlimitbreach();
    alertcount=1;
    // alertcount=1 means value breached
  }
    else
    {
      printnobreach();
      // alertcount=0 means value within range
    }
 return alertcount;
}
