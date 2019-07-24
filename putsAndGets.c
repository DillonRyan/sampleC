#include "stdio.h"

int main(int argc, char const *argv[]) {
  char c[10];
  printf("Please enter your full name");
  gets(c);
  puts(c);
  return 0;
}
