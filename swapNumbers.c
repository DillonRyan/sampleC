#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b,c;

  printf("please enter the first number \n");
  scanf("%d", &a);
  printf("please enter the second number \n");
  scanf("%d", &b);
  c = a;
  a = b;
  b = c;

  printf("the numbers reversed are %d %d \n", a, b);
  return 0;
}
