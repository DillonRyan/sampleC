#include "stdio.h"

int main(int argc, char const *argv[]) {
  int c, *p;
  c = 64;

  printf("The value of C is %d\n", c);
  printf("The address of c is %d\n",&c);

  printf("The value of *p is %d\n",p);
  printf("The address of *p is %d\n",*p);
  return 0;
}
