#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct node {
  char data;
  struct node *next; // pointer to the next data value
} * top = NULL;

  void push (char c){
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = c;
    if(top == NULL){ // if stack is empty
      next == NULL;
    }else{
      next = top;
      top = newNode;
    }
  }

  char pop(){
    char poppedChar = 0;
    struct node *tmp = top;
    top = tmp->next;
    poppedChar = tmp->data;
    free(tmp);
    return poppedChar;
  }

    int main(int argc, char const *argv[]) {
      int i;
      char c;
      char result;
      int ignoreNextChar;
      char a,b;


      if(argc < 1){
        printf("There has not been enough parameters passed in\n");
      }else{
        ignoreNextChar = 0;
      }

      for (i = 0; i < sizeof(argv); i++) {
        c = argv[i];
        if(c == "T" || c == "F"){
          push(c);
        } else if (c == "&&" || c == "||" || c == "!"){
          a = pop(); // ask about this
          b = pop();

          if(a == "T"){
            a = 1;
          }else{
            a = 0;
          }

          if(b == "T"){
            b = 1;
          }else{
            b = 0;
          }
        }

        if(c == "&"){
          result = a & b;
          push(result);
        } else if (c == "!"){
           a = pop();
        }
        else{
          if (c == "|"){
            result = a | b;
            push(result);
          }
          ignoreNextChar = 1;
        }

        if (a == "T"){
          a = 0;
        }else{
          a = 1;
          push(a);
        }

      }
      char result1 = pop();
      if(result1 == 1){
        result1 = "T";
      }else{
        result1 = "F";
      }
      printf("The result is %s", result1);

      return 0;
    }
