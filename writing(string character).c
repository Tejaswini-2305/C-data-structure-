#include<stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp=fopen("sad.txt","w");
  fputc('a',fp);
  fputs(" hello",fp);
  return 0;
}