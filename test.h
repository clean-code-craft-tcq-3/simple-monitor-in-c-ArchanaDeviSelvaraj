  #include <assert.h>

  void test()
  {
  printf("Check 1\n");
  assert(batteryIsOk(23, 70, 0.7)==0);
  printf("\nCheck 2\n");
  assert(batteryIsOk(46, 81, 0.9)==1);
  printf("\nCheck 3\n");
  assert(batteryIsOk(-1, 19, -1)==1);
  printf("\nCheck 4\n");
  assert(batteryIsOk(30, 50, 0.4)==0);
  printf("\nCheck 5\n");
  assert(batteryIsOk(35, 55, 0.3)==0);
  printf("\nCheck 6\n");
  assert(batteryIsOk(-10, 65, 1.0)==1);
  printf("\nCheck 7\n");
  assert(batteryIsOk(-20, 90, 0.6)==1);
  printf("\nCheck 8\n");
  assert(batteryIsOk(-40, 24, 0.5)==1);
  printf("\nCheck 9\n");
  assert(batteryIsOk(43, 77, 0.78)==0);
  printf("\nCheck 10\n");
  assert(batteryIsOk(2, 24, 0.03)==0);
  }
