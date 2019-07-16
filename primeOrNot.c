#include <stdio.h>
int main() {
  int userInput, i, flag = 0, numDivs = 0, doloop = 0;
  while(doloop < 2){
  printf("Please enter a number to check if prime:");
  scanf("%d", &userInput);

  for(i =2; i <= userInput / 2; i++){
    if(userInput % i == 0){
      numDivs = i;
      flag = 1;
      break;
    }

  }
  if(flag == 0){
    printf("%d  is a prime number \n", userInput);
  }else
  printf("%d is not a prime number, it is divisable by: %d \n", userInput, numDivs);
  }
}
