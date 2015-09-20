#include <stdio.h>

int main(int argc, char *argv[])
{
  double centNumber;
  printf("Please input a number in cm:\n");
  scanf("%lf",&centNumber);

  int feet = centNumber / 30.48;
  double inches = (centNumber - (feet * 30.48)) / 2.54;
  printf("You're number is %d and it has %d ft %.1f inch", (int)centNumber,feet,inches);

  return 0;
}