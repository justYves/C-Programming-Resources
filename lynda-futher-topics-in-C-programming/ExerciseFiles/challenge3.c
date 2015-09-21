#include <stdio.h>
#include <stdlib.h>

int *prime(void);

int main(int argc, char *argv[]){
  int *array;
  array = prime();
  for(int i =0; i < 5; i++){
    printf("%2d\n",array[i]);
  }

  return EXIT_SUCCESS;
}

int *prime(void){
  static int primeNumber[5] = {2,3,5,7,11};

  return primeNumber;
}

