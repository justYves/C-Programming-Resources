#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DATANUM 10
void printBar(int);
void printAllBars(int);
void generateData(int);
int dataSet[DATANUM];

int main(int argc, char *argv[]){

  generateData(DATANUM);
  printAllBars(DATANUM);
  return EXIT_SUCCESS;
}

void generateData(int number){
  srand(time(NULL));
  for(int i = 0 ; i<number; i++){
    dataSet[i] = rand() % 50;
  }
}

void printBar(int number){
  printf("%3d:",number);
  while(number>0){
    printf("•");
    number--;
  }
  putchar('\n');
}

void printAllBars(int number){
  for(int i = 0; i < number ; i++ ){
    printBar(dataSet[i]);
  }
}