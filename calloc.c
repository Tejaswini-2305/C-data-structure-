#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  char *name;
  name=calloc(1,5);
  name=realloc(name,20);
  strcpy(name,"hello");
  printf("%s\n",name);
  free(name);
  return 0;
}