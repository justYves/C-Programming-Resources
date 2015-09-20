#include <stdio.h>

int main(int argc, char *argv[])
{
  int centNumber;
  printf("Please input a number in cm:\n");
  scanf("%d",&centNumber);

  int feet = centNumber / 30.48;
  int inches = (centNumber - (feet * 30.48)) / 2.54;
  printf("You're number is %d and it has %d ft %d inch",centNumber,feet,inches);


}