#include <stdio.h>

void printRange(int,int,int);

int main(int argc, char *argv[])
{
  int num1,num2,k;
  printf("Please enter value1: ");
  scanf("%i",&num1);
  printf("Please enter value2: ");
  scanf("%i",&num2);
  printRange(num1,num2,1);
}

void printRange(int num1,int num2, int k)
{
  if(num1>num2) return;
  else {
    printf("step[%d] == %d\n",k, num1);
    printRange(++num1,num2,++k);
  }

}