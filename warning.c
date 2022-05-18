int warning(float value,float minlimit,float maxlimit)
{
  float tolerance=(5.000000/100.000000)*maxlimit;
  if(minlimit<=value<=minlimit+tolerance)
  {
    return 1;
    //1-Approaching lower limit
    }
  else if(maxlimit-tolerance<=value<=maxlimit){
    return 2;
    //2-Approaching upper limit
    }
  else
    return 0;
}
