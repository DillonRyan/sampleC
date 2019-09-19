#include "stdio.h"
#include "stdlib.h"

typedef struct node {
  int data;
  struct node * next;
}node_t;

node * createLinkedList(){
  node_t * head = NULL;
  head = malloc(sizeof(node_t));
  if(head == NULL){
    return 1;
  }
  head->data = 1;
  head->next = malloc(sizeof(node_t)):
  head->next->data = 2;
  head->next->next-> = NULL;
}

void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

int main(int argc, char const *argv[]) {
  head = createLinkedList();
  print_list(head);
  return 0;
}
