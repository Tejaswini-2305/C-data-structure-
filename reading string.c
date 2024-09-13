#include<stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp=fopen("sad.txt","r");
  fgets(c,9,fp);
  printf("Character is %s",c);
  fclose(fp);
  return 0;
}