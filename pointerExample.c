#include <stdio.h>
/*
int main(int argc, char const *argv[]) {
  int *pc, c;
  c = 22;
  printf("Address of c : %d\n",&c);
  printf("Value of c : %d\n\n",c);
  pc = &c;
  printf("Address of pointer pc : %d\n",pc);
  printf("Content of pointer pc : %d\n\n",*pc);
  c = 11;
  printf("Address of pointer pc : %d\n",pc);
  printf("Content of pointer pc : %d\n\n", *pc);
  *pc = 2;
  printf("Address of c : %d\n",&c);
  printf("Value of c : %d \n\n",c);
  return 0;
}
*/
int main(int argc, char const *argv[]) {
  int i;
  int a[5]= {1,2,3,4,5};

  for(i = 0; i < 5; i++){
    printf("%d \n",&a);
    a++;
  }
  return 0;
}
