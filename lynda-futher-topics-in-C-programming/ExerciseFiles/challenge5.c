#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
  char *str="this is the string";
  int i = strlen(str);
  char *ptr;
  ptr = str;

  // while (*ptr++){
  //   i++;
  // }

  // ptr = str;



  for(int x = 0; x < i; x++){
    putchar(*(ptr+x));
  }

  // putchar(*(str+x);

  return EXIT_SUCCESS;
}