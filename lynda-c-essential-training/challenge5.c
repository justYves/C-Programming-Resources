#include <stdio.h>
#include <stdlib.h>

void printBar(int);
void printAllBars();

int main(int argc, char *argv[]){

  printAllBars();

  return EXIT_SUCCESS;
}

void printBar(int number){
  printf("%3d:",number);
  while(number>0){
    printf("•");
    number--;
  }
  putchar('\n');
}

void printAllBars(){
  for(int i = 0; i < 20 ; i++ ){
    printBar(i);
  }
}