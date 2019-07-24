#include "stdio.h"
#include "string.h"

  typedef struct{
    int age;
    char *name;
  }person;

int main(void) {
  person dillon;

  dillon.age = 21;
  dillon.name = malloc(6 * sizeof(char));
  strcpy(dillon.name, "Dillon");
  printf("%d\n",dillon.age);
  return 0;
}
