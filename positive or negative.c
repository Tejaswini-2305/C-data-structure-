#include <stdio.h>

int main()
{
  int n;
  printf("enter the value for n:");
  scanf("%d",&n);
  if (n<0){
    printf("%d is negative",n);
  }
  else{
    printf("%d is positive",n);
}}