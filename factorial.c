#include <stdio.h>
int main()
{
  int n,factorial=1;

  printf("Enter a positive integer:");
  scanf("%d",&n);

  int i=n;
  if(i>=n){
    while(i>0){
      factorial=factorial*i;
      i--;
    }
    printf("Factorial of %d is %d",n,factorial);
  }
  else{
    printf("Factorial cannot be generated for negative numbers");
  }
  }
