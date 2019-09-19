#include "stdio.h"
#include "stdlib.h"

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


    void addStringToSet(int data, int pos){
      int i;
      node * temp = (struct node*) malloc(sizeof(struct node));
      temp->data = data;
      temp->next = NULL;
      if(pos == 1){
        temp->next = head;
        head = temp;
        return;
      }
      node * temp1 = (struct node*)malloc(sizeof(struct node));
      for (i = 0; i < pos-2; i++) {
        temp1 = temp1->next;
      }
      temp->next = temp1->next;
      temp1->next = temp;

  }
  void delteFromList(int pos){
    struct node *temp1 = head;
    if(pos == 1 ){
      head = temp1->next; // makes the head point to the second node
      free(temp1);
    }
    int i;
    for (i = 0; i < pos-2; i++) {
      temp1 = temp1->next;
      struct node * temp2 = temp1->next;
      temp1->next = temp2->next;
      free(temp2) // delete temp 2
    }

  }

  void printList(node * head){
    node * current = head;
    while(current->next != NULL){
      printf("%d\n", current->data);
      current = current->next;
    }
  }

int stringCompare(node * first, node * second){
  int firstMyString = 0;
  int secondMyString = 0;
  while(first->next != NULL){
    first = first->next;
    firstMyString++; //counter to count the amount of nodes

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

h->e->l->l->o
^
|

e->l
^
|

  int searchFunction(node * textString, node * searchString){

    int sizeOfInput;
    while(searchString->next != NULL){
      sizeOfInput++;
      searchString = searchString->next;
    }
    int counter = 0;
    while(textString->next != NULL){
      while(searchString->next !=NULL){


      if(textString->data == searchString->data){
        counter++
      }
      searchString = searchString->next;
    }
      textString = textString->next;

    }
    if(counter == sizeOfInput){
      return 1;
    }else{
      return 0;
    }
  }


    node * union(node * firstString, node * secondString){
      int i = 0;
      node * unionOfSet = NULL;
      while(firstString->next != NULL){
        addStringToSet(firstString->data, i);
        i++;
        firstString = firstString->next;
      }
      while(secondString->next != NULL){
        if(searchFunction(unionOfSet, secondString->data)){
          (addStringToSet(secondString, i));
          i++;
        }
       secondString = secondString->next;
      }
      return unionOfSet;

    }

    node * intersection(node * firstString, node * secondString){
      node * intersectionOfSet = NULL;
      while(firstString->next != NULL){
        while(secondString->next != NULL){
          if(firstString->data == secondString->data){
            addStringToSet(intersectionOfSet, secondString);
          }
          secondString = secondString->next;
        }
        firstString = firstString->next;
      }
      return intersectionOfSet;
    }

    void freeMem(node * stringSet){
      while(stringSet->next != NULL){
        stringSet = stringSet->next;
        free(stringSet);
      }
    }

    int containsCycle(node * head){ // checking for cycle in a linkedlist
      node * slow = head;
      node * fast = head;
      int isLoop = 2;

      while(isLoop == 2){
        fast = fast->next;
        fast = fast->next; //increment it twice
        slow = slow->next;
        if(fast == slow){
          isLoop = 1;
        }
        if(fast == NULL || slow == NULL){
          isLoop = 0;
        }
      }
      return isLoop;
    }


    void enqueue(node * q, int k){
      node * temp = newNode(k); // new node
      if(q->rear == NULL){
        q->front = q->rear = temp;
        return;
      }
      q->rear->next = temp; // add the node to the rear
      q->rear = temp;
    }

    node * dequeue(node * q){
      if(q->front == NULL){
        return NULL;
      }

      node * temp = q->front;
      q->front = q->front->next;

      if(q->front == NULL){
        q->rear == NULL
      }
      return temp;
    }

    //stacks with linked node_list
    void push(char data){
      struct node * head;
      struct node * temp;
      temp = struct * node malloc(sizeof(struct node));

      if(!temp){
        printf("Heap overflow");
        exit(1);
      }
      temp->data = data;
      temp->next = head;
      head = temp;
    }
    int isEmpty(){
      return head == NULL;
    }

    void pop(){
      struct Node * temp;
      if(head == NULL){
        printf("Stack underflow");
        exit(1);
      }
      else{
        temp = head;
        head = head->next;
        temp->next = NULL;
        free(temp);
      }

    }
    int peek(){ // return top element in a stack
      if(!isEmpty()){
        return head->data;
      }else{
        exit(1);
      }

    }
