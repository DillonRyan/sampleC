#include "stdio.h"
#include "stdlib.h"

typedef struct{
  //int key;
  char data;
  struct node * next;
}node;

  struct node * createNewEmptyString(){
    struct node * newString = (struct node*)malloc(sizeof(struct node));
  //  newString->key = NULL;
    newString->data = NULL;
    newString->next = NULL;
    return newString;
  }

  struct node * newLinkedList(char string[]){
    int i;
    node * head = NULL;
    node * myString = NULL;
    node * ptr = NULL;
    for (i = 0; i < sizeof(string); i++) {
      myString = (node*)malloc(sizeof(struct node));
      myString->data = string[i]; 
      myString->next = NULL;

      if(head == NULL){
        head = myString;
      }else{
        ptr = head;
        while(ptr->next != NULL){
          ptr = ptr->next;
          ptr->next = myString;
        }

      }
    }
    return head;
  }

  int stringCompare(node * firstMyString, node *secondMyString){
    int firstCounter = 0;
    int secondCounter = 0;

    while(firstString->next != NULL){
      firstMyString = firstMyString->next;
      firstCounter++;
    }

    while(secondMyString->next != NULL){
      secondMyString = secondMyString->next;
      secondCounter++;
    }

    if(firstCounter < secondCounter){
      return -1;
    }else if(firstCounter = secondCounter){
      return 0;
    }else if(firstCounter > secondCounter){
      return 1;
    }
  }

  int searchFunction(node * plainText, node * searchText){
    struct node * search = searchText;
    struct node * text = plainText
    int sizeOfSearch = 0;
    int counter = 0;

    while(search!=NULL){
      sizeOfSearch++;
      search = search->next;
    }

      while(text->next != NULL){
        while(search->next != NULL){
          if (text->data == search->data){
            counter++;
          }
          search = search->next;
        }
        text = text->next;
      }
      if(counter == sizeOfSearch){
        return 1;
      }else{
        return 0;
      }
  }
