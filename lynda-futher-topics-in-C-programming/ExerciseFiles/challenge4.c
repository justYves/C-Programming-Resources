#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct person {

  char name[32];
  int age;
};

struct person *allocateStruct(void);
void prompt(struct person *p);
void print(struct person *p);

int main(int argc, char *argv[]){
  struct person *p = allocateStruct();
  prompt(p);
  print(p);
}

struct person *allocateStruct(void){
  struct person *p;

  p = (struct person *)malloc(sizeof(struct person));
  if( p == NULL)
  {
    perror("Unable to allocate structure");
    exit(1);
  }
  return(p);
}

void prompt(struct person *p){
  printf("What's your name?\n");
  scanf("%s",p->name);
  printf("How old are you?\n");
  scanf("%d",&p->age);
}

void print(struct person *p){
  printf("You are %s and you are %d years old",p->name, p->age);
}