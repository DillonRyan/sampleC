#include "stdio.h"

int main(int argc, char const **argv) {
  int i,pos, lastDot;
//  char c[21] = argv[1];
char c[20];
  char at, dot,term[3], findLastDot, input[20];

 for (i = 0; i < sizeof(argv); i++) {
   input[i] = argv[1];
  printf("they are %c\n",input[i]);
  strcpy(input[i], argv[1]);
    /* code */
  }
  for (i = 0; i < sizeof(argv); i++) {
    /* code */
    printf("The contents of the passed in is %c\n",input[i]);
  }


  //int pos;

  for (i = 0; i < 21; i++) {
    at = c[i];
    if(at != c[0] && at == '@'){ // add in isDigit and isAlpha
      pos = i;
      printf("It has an @ symbol at poaition %d\n", pos);
    }
    /* code */
  }
  for (i = 0; i < pos; i++) {
    dot = c[i];
    if(dot == '.'){ // add in isDigit and isAlpha
      printf("There is a dot before the @ symbol\n");
    }
}
  for(i =21; i > pos; i--){
    findLastDot= c[i];
    if(findLastDot == '.'){
      lastDot = i;
      printf("There is a dot after the @ as pos %d \n",lastDot);
    }
  }
  for(i = lastDot; i <21;i++){
    term[i - lastDot - 1] = c[i];
  }
  for(i = 0; i <3;i++){
    printf("The last 3 things are %c\n",term[i]);
  }
  return 0;
}
