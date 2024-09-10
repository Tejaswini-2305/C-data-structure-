#include <stdio.h>
int main()
{
  int n,factorial=1,i=1;

  printf("Enter a positive integer:");
  scanf("%d",&n);

  do {
    factorial=factorial*i;
    i++;
  }while (i<=n);
    printf("Factorial of %d is %d",n,factorial);
  }
  
