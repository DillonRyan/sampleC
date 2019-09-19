#include "stdio.h"
#include "stdlib.h"
//Off the 2017 Systems programming exam Q2
  typedef struct {
    char data;
    struct node * next;
  } node;

    node * creatNewString(){
      struct * stringList;
      stringList->data = NULL;
      stringList-> next = NULL;
      return stringList;
    }

  /* function prototpyes */
  node * createLinkedList();
  void displaylist(node * head);
  int stringCompare(char firstString[],char secondString[]);

  int main(int argc, char const *argv[]) {
    node * head = NULL;
    char firstString[] = "Hello";
    char secondString[] = "hello";
    stringCompare(firstString,secondString);
    head = createLinkedList();
    displaylist(head);
    return 0;
  }

int stringCompare(node * first, node * second){
  int firstMyString = 0;
  int csecondMyString = 0;
  while(first->next != NULL){
    first = first->next;
    firstMyString++;

  }
  while(second->next != NULL){
    second = second->next;
    secondMyString++;

  }
  //compare the two
  If(firstMyString > secondMyString){
    return -1;
  }
  else if (firstMyString < secondMyString){
    return 1;
  }
  else {
  return 0;
}

}



  node * createLinkedList(){
    char theArray[] = "dillon";
    int i = 0;
    node * head = NULL;
    node * temp = NULL;
    node * p = NULL;

    for (i = 0; i < sizeof(theArray); i++) {
      temp = (node*)malloc(sizeof(node));
      temp->data = theArray[i];
      temp->next = NULL;

      if(head == NULL){
        head = temp;
      }
      else
      {
        p = head;
        while(p->next != NULL){
          p = p->next;
        p->next = temp;

        }
      }

      /* code */
    }
    return head;
  }

  void displaylist(node * head){
    //node * p = head;
    while(head != NULL){
      printf(" %c -> \n",head->data);
      head = head->next;
    }

  }
