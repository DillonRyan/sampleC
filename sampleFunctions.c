#include "stdio.h"

int main(int argc, char const *argv[]) {
  int first, second,result;
  printf("Please enter two numbers to add together\n");
  scanf("%d %d", &first, &second);
  result = addNum(first, second);
  printf("The answer to %d + %d = %d \n",first, second, result);
  /* code */
  return 0;
}

  int addNum(int firstNum, int secondNum){
    int answer;

    answer = firstNum + secondNum;
    return answer;
  }
