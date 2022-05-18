int checklimit(float value,float minlimit,float maxlimit)
{
  int alertcount=0;
  if (value < minlimit) {
    printf("value is below the limit\n");
    alertcount=1;
  }
  else if (value > maxlimit){
    printf("value is above the limit\n");
    alertcount=1;
  }
  else
  {
    printf("value is within range\n");
  }
 return alertcount;
}
