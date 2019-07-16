#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct node {
  char data;
  struct node * next;
} * top = NULL;

  void push (char c) {
    struct node * newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = c;
    if(top == NULL){
      next == NULL;
    }else{
      next = top;
      top = newNode;
    }
  }

  char pop(){
    char poppedChar = 0;
    struct node * tmp = top;
    top = tmp->next;
    poppedChar = tmp->data;
    free(tmp);
    return poppedChar;
  }

  int main(int argc, char const *argv[]) {
    int i;
    char c;

    if(argc < 1 ){
      printf("not enough parameters");
    } else {
      int ignorenextChar  = 0;
    }
      for (i = 0; i < sizeof(argv[]); i++) {
        c = argv[i];
        if(c == "T" || c == "F"){
          push(c);
        } else if (c == "&&" || c == "||" || c == "!"){
          char result;
          int a = pop();
          int b = pop();
          if (a == "T"){
            a = 1;
          }else {
            a = 0;
          }
          if(b == "T"){
            b = 1;
          }else{
            b = 0;
          }
        }
        if(c == "&"){
          result = a & b; push(result);
        } else if (c == "|"){
          result = a | b; push(result);
        }
        ignorenextChar = 1;
        else if(c == "!"){
          int a = pop();
        }
        if(a == "T"){
          a = 0;

        }else{
          a = 1;
          push(a);
        }
      }
    int result = pop();
    if(result == 1){
      result = "T";
    }else{
      result = "F";
    }
    printf("The result is  %c", result);
    return 0;
  }
