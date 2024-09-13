#include<stdio.h>
int main(){
  FILE *fp;
  char c;
  fp=fopen("sad.txt","r");
  c=fgetc(fp);
  printf("Character is %c",c);
  fclose(fp);
  return 0;
}