#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
  if (argc==1) {
    printf("ERROR: No Arguments provided");
  } else {
    printf("Argument %s was provided", argv[1]);
  }

  return EXIT_SUCCESS;
}