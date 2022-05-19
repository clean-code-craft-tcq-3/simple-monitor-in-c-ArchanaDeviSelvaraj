#include <assert.h>
#include "batterymanagement.h"

  void test()
  {
  //test to check battery status
  printf("Check 1\n");
  assert(CheckBatteryStatus(23, 70, 0.7)==0);
  printf("\nCheck 2\n");
  assert(CheckBatteryStatus(46, 81, 0.9)==1);
  printf("\nCheck 3\n");
  assert(CheckBatteryStatus(-1, 19, -1)==1);
  printf("\nCheck 4\n");
  assert(CheckBatteryStatus(30, 50, 0.4)==0);
  printf("\nCheck 5\n");
  assert(CheckBatteryStatus(35, 55, 0.3)==0);
  printf("\nCheck 6\n");
  assert(CheckBatteryStatus(-10, 65, 1.0)==1);
  printf("\nCheck 7\n");
  assert(CheckBatteryStatus(-20, 90, 0.6)==1);
  printf("\nCheck 8\n");
  assert(CheckBatteryStatus(-40, 24, 0.5)==1);
  printf("\nCheck 9\n");
  assert(CheckBatteryStatus(43, 77, 0.78)==0);
  printf("\nCheck 10\n");
  assert(CheckBatteryStatus(2, 24, 0.03)==0);
  }
