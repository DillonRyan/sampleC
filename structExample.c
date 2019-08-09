#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct myself { //- Using the ". operator"
  int id;
  char name[20];
  float precentage;
}record;

int main(int argc, char const *argv[]) {

    printf("Please enter your id \n");
    scanf("%d", &record.id);
    printf("Please enter your name \n");
    scanf("%s", &record.name);
    printf("Please enter your precentage \n");
    scanf("%f", &record.precentage);

    printf("---------------------\n");
    printf("The ID is : %d\n",record.id);
    printf("Name is : %s\n", record.name);
    printf("precentage is : %f\n",record.precentage);


  return 0;
}
/*
struct myself { // using pointers
  int id;
  char name[20];
  float precentage;
};

int main(int argc, char const *argv[]) {
  struct myself record = {23,"Dillon",45.6};
  struct myself *ptr;
  ptr = &record;

    printf("The ID is : %d\n",ptr->id);
    printf("Name is : %s\n", ptr->name);
    printf("precentage is : %f\n",ptr->precentage);


  return 0;
}
*/
