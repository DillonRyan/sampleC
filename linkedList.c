#include "stdio.h"
#include "stdlib.h"


  typedef struct node {
    int data;
    struct node * next;
  } node;   // this is the name of our node type

/* function prototpyes */
node * createLinkedList(int n);
void displaylist(node * head);


int main(int argc, char const *argv[]) {
  int n = 0;
  node * head = NULL;
  printf("How many nodes do you want? ");
  scanf("%d",&n);
  head = createLinkedList(n);
  displaylist(head);
  return 0;
}

node * createLinkedList(int n){
  int i = 0;
  node * head = NULL;
  node * temp = NULL;
  node * p = NULL;

  for (i = 0; i < n; i++) {
    temp = (node*)malloc(sizeof(node));
    printf("Please enter node number %d:",i + 1);
    scanf("%d",&(temp->data));
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
  node * p = head;

  while(p != NULL)
  {
    printf("\t%d ->",p->data);
    p = p->next;
  }

}
