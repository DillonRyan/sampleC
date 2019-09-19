#include "stdio.h"

struct node{
  char * data;
  int key;
  node * head;
};
struct node_list{
  int counter;
  node * head;
};
