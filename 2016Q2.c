#include "stdio.h"


struct node{
    char data;
    struct node * next;
};
struct node * head;

  node * createNewSet(){
    struct node * newSet = (struct node *)malloc(sizeof(struct node));
    newSet->data = NULL;
    newSet->next = NULL;
    return newSet;
  }

  void addStringToSet(node * head, char StringIn[]){
    struct node * temp = NULL;
    struct node * ptr = NULL;
    int i;
    for (i = 0; i < sizeof(StringIn); i++) {
      temp = (struct node *)malloc(sizeof(struct node));
      temp->data = StringIn[i];
      temp->next = NULL;
      if(head = NULL){
        head = temp;
      }else{
        ptr = head;
        while(ptr->next !=NULL){
          ptr = ptr->next;
          ptr->next = temp;
        }

      }
    }
    return head;
  }
  node * removeFromSet(node * head, int pos){
    struct node * current = head;
    int i;
    if(pos == 1){
      head = current->next;
      free(current);
    }
    for (i = 0; i < pos-2; i++) {
      current = current->next;
      struct node * temp = current->next;
      current->next = temp->next;
      free(temp);
    }
  }

  int checkIfInSet(node * set,char checkString[]){
    struct node * head = NULL;
    int i;
    int size = sizeof(checking)
    int counter++;
    while(set->next!=NULL){
      for (i = 0; i < size; i++) {
        if(set->data == checkString[i]){
          counter++;
        }
      }
      set = set->next;
    }
    if(counter == size){
      return 1; // it is in the set
    }else{
      return 0; // it is not in it
    }

  }

  node * union(node * firstSet, node * secondSet){

    while(firstSet->next != NULL){
      addStringToSet(firstSet, firstSet->data);
      firstSet = firstSe->next;
    }

    while (secondSet->next != NULL) {
      if(!checkIfInSet(firstSet, secondSet->data)){
        addStringToSet(firstSet, secondSet->data);
        secondSet = secondSet->next;
      }
    }
    return firstSet;
  }

  node * intersection(node * firstSet, node * secondSet){
    node * setIntersection = createNewSet();
    while(firstSet->next != NULL){
      while(secondSet->next!=NULL){
        if(firstSet->data == secondSet->data){
          addStringToSet(setIntersection, firstSet->data);
        }
        secondSet = secondSet->next;
      }
      firstSet = firstSet->next;
    }
  }

  void freeMem(node * set){
    while(set->next != NULL){
      set = set->next;
      free(set);
    }
  }










.
