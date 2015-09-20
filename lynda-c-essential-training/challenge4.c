#include <stdio.h>
#include <stdlib.h>

void process(int);

int main(int argc, char *argv[]){
  printf("Please input th current value of the stock:\n");
  float stockValue;
  const float price = 100;
  scanf("%f",&stockValue);
  process(stockValue>price);
  return EXIT_SUCCESS;
}

void process(int sell){
  switch(sell){
    case 1:
    printf("sell!");
    break;
    case 0:
    printf("hold");
    break;
  }

}