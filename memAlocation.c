#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]) {
  char *memoryAlocation;

  memoryAlocation = malloc(20 * sizeof(char));
  if(memoryAlocation == NULL){
    printf("Unable to allocate requested memory\n");
  }else{
    strcpy(memoryAlocation, "dynamic memory alocation");
  }
  printf("Dynamiclly allocated memory content : %s \n",memoryAlocation);
  free(memoryAlocation);
  return 0;
}
