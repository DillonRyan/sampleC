#include "stdio.h"
#include "stdlib.h"
//Off the 2017 Systems programming exam Q2
  typedef struct {
    char data;
    struct node * next;
  } node;

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

int stringCompare(char firstString[], char secondString[]){
    int i = 0;
    while(firstString[i] == secondString[i] && firstString[i] == '\0')
	  	i++;

  	if(firstString[i] < secondString[i])
   	{
   		printf("\n str1 is Less than str2");
	}
	else if(firstString[i] > secondString[i])
   	{
   		printf("\n str2 is Less than str1");
	}
	else
   	{
   		printf("\n str1 is Equal to str2");
	}

  	return 0;

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
      //printf("Please enter node number %d:",i + 1);
      //scanf("%s",&(temp->data));
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
