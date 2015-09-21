#include <stdio.h>
#include <stdlib.h>


char *calculateDirection(int);

int main(int argc, char *argv[]){
  int number;
  printf("Please enter a number between 0 and 360\n");
  scanf("%i",&number);
  calculateDirection(number);

  return EXIT_SUCCESS;
}

char *calculateDirection(int number){
  number = (number == 360) ? 0 : number;
  int direction = number / 90;
  char NS, EW;
  printf("%i",direction);
  switch (direction){
    case 0:
      NS = 'N';
      EW = 'E';
      break;
    case 1:
      NS = 'S';
      EW = 'E';
      number = 180 - number;
      break;
    case 2:
     NS = 'S';
     EW = 'W';
     number -= 180;
      break;
    case 3:
      NS = 'N';
      EW = 'W';
      number = 360 - number;
      break;
  }
  printf("You're headed %c %i.0 %C",NS,number,EW);
  return "My String";

}