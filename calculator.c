#include "stdio.h"

int main(int argc, char const *argv[]) {
  char operand;
  int firstNum, secondNum, answer;

  printf("Please enter if you would like to either '+','-','*','/'");
  scanf("%c", &operand);

  printf("Enter first number - ");
  scanf("%d",&firstNum);
  printf("Enter second number - ");
  scanf("%d",&secondNum);

  if(operand == '+'){
    answer = add1(firstNum, secondNum);
    printf("The answer is %d\n",answer);
  }
  else if (operand == '-'){
    answer = subtract1(firstNum, secondNum);
    printf("The answer is %d\n",answer);
  }
  else if (operand == '*'){
    answer = multiply1(firstNum, secondNum);
    printf("The answer is %d\n",answer);
  }
  else{
    answer = divide1(firstNum, secondNum);
    printf("The answer is %d\n",answer);
  }
}


int add1(int first, int second){
  int result;
  result = first + second;
  return result;
}

int subtract1(int first, int second){
  int result;
  result = first - second;
  return result;
}

int multiply1(int first, int second){
  int result;
  result = first * second;
  return result;
}

int divide1(int first, int second){
  int result;
  result = first / second;
  return result;
}
