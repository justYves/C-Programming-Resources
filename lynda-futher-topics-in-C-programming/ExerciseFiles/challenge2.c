#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *arv[]){
  printf("Please input an integer");
  int number;
  scanf("%i",&number);
  printf("the inputted number is  %.1f\n",(float)number);
  return EXIT_SUCCESS;
}