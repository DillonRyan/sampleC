#include "stdio.h"

int main(int argc, char const *argv[]) {
  int i;
  int count = 10;
  int userInput;
  printf("Please enter a number \n");
  scanf("%d", &userInput);
  for (i = userInput; i < userInput + 10; i++) {
    printf("The next 10 numbers are : ");
    printf("%d\n",i);
  }
  return 0;
}
