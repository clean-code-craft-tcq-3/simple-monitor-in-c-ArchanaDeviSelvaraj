int warning(float value,float minlimit,float maxlimit)
{
  float tolerance=(5.000000/100.000000)*maxlimit;
  if(value>=minlimit && value<=minlimit+tolerance)
  {
    return 1;
    }
  else if(value<=maxlimit && value>=maxlimit-tolerance){
    return 2;
    }
  else
    return 0;
}
