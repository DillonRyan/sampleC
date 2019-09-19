#include "stdio.h"
int main(int argc, char const *argv[]) {
  int amountIn, i = 0;
  printf("Please enter how many parentits you want :");
  scanf("%d",&amountIn);
  char input[amountIn - 1];
  for (i = 0; i < amountIn; i++) {
    printf("Enter your number %d parentis :",i + 1);
    scanf("%s",&(input[i]));
  }
  int sizeOfInput = amountIn - 1;
  int middle = sizeOfInput / 2;
  int j,count = 0;
  for(i = 0; i <= sizeOfInput / 2; i++){
    for(j = middle; j <= sizeOfInput; j++){
        if(input[i] == '(' && input[j] == ')'){
          count++;
        }
        if(input[i] == '{' && input[j] == '}'){
          count++;
        }
        if(input[i] == '[' && input[j] == ']'){
          count++;
        }
    }
  }
  if(count == amountIn / 2){
    printf("It is a well formed article\n");
  }
  else
  {
    printf("It is not well formed\n");
  }
  return 0;
}
