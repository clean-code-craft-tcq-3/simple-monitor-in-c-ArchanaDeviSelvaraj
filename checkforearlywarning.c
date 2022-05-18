void earlywarning(int invalid)
{
  if(invalid!=1)
  {
  printf("Though values are within range, check for early warning if any\n");
  printwarning(temperature,soc,chargeRate);
  }
}
