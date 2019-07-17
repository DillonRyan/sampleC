#include <stdio.h>
int main()
{
  int userNum;
  printf("Please enter the number ");
  scanf("%d", &userNum);

  if(userNum % 2 == 0){
    printf("%d  is even \n", userNum);
  }
  else printf("%d  is not even \n", userNum );

}
