#include "stdio.h"

int main(int argc, char const *argv[]) {
  int i;
  int sum = 0;
  int oneToTen[5];
  for (i = 0; i < 5; i++) {
    printf("Please enter the number %d ",(i +1));
    scanf("%d\n", &oneToTen[i] );
  }
  int n = sizeof(oneToTen)/sizeof(int);
  int max = oneToTen[0];
  int min = oneToTen[0];
  for (i = 0; i < n; i++) {
      if(oneToTen[i] > max){
        max = oneToTen[i];
      }
      if(oneToTen[i] < min){
        min = oneToTen[i];
      }

      sum += oneToTen[i];
  }
  int average = sum / 5;
  printf("\n");
  printf("The sum of the array is %d \n",sum);
  printf("The average value in the array is %d\n",average);
  printf("There are %d elements in the array \n", n);
  printf("The largest element in the array is %d \n", max);
  printf("The smallest element in the array is %d \n", min);
  printf("\n");
  return 0;

}
