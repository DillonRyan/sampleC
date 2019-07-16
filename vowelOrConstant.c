#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[]) {
  char c;

  printf("Pleasde enter a letter from the alphabet");
  scanf("%c", &c);
  if(c == "a" || c == "e" || c == "i" ||
  c == "o" || c == "u"){
    printf("%s is a vowel \n", c);
  }else {
    printf("The letter %c is not a vowel ",c);
  }
  return 0;
}
