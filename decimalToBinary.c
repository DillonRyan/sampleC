#include "stdio.h"


int main(int argc, char const *argv[]) {
  int decNumb;
  printf("Please enter your decimal number :");
  scanf("%d",&decNumb);
  int i = 0,j;
  int output[32];
  while(decNumb > 0) {
    output[i] = decNumb % 2;
    decNumb = decNumb / 2;
    i++;
  }
  //printf("The number %d in Binary is :", decNumb);
  for (j = i - 1; j >= 0; j--) {
    printf("%d",output[j]);
  }
  printf("\n");
  return 0;
}
