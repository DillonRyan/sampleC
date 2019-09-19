#include "stdio.h"
#include "stdlib.h"

 struct {
  char data;
  struct node * next;
} stackNode;

struct node * head;

  struct node * push(char data){
    struct stackNode * newNode = (struct stackNode*)malloc(sizeof(struct node));
    if(newNode == NULL){
      exit(0);
    }
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}
  void freeMem(){
    struct node * temp = (struct node*)malloc(sizeof(struct node*));
    while(head != NULL){
      temp = head;
      head = temp->next;
      free(temp);
    }
  }

  char pop(){
     char poppedChar;
     struct stackNode * temp = (struct stackNode*)malloc(sizeof(struct node));
     temp = head;
     head = temp->next;
     poppedChar = temp->data;
     free(temp);
     return poppedChar;
  }

  int main(int argc, char const *argv[]) {
    int i;
    char input, result,answer;
    char a,b;
    if(argc < 1){
      printf("Not enough paramenters passed in");
    }else{
      for (i = 0; i < sizeof(argv); i++) {
        input = argv[i];
        if(input == 'T' || input == 'F'){
          push(input);
        }else if(input == '&' || input == '|'){
          input = argv[i+1];//skipping the second & or |
          a = pop();
          b = pop();
        }else if(input == '!'){
          a = pop();
          b = pop();
        }
        if(a = 'T'){
          a = 1;
        }else{
          a = 0;
        }
        if(b = 'T'){
          b = 1;
        }else{
          b = 0;
        }

        if(input = '&'){
          result = a & b;
          push(result);
        }else if(input == '|'){
          result = a | b;
          push(result);
        } else if(input = '!'){
          result = !a;
          push result;
        }
      }
      answer = pop();
      if(answer == 'T'){
        printf("The output is true");
      }
      else{
        printf("The outputi is false");
      }
    }
    return 0;
  }
