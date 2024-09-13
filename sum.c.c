#include <stdio.h>
int main(){
  int n , sum=0;
  printf("enter the number:");
  scanf("%d",&n);
  while(n!=0)
    {
      sum=sum+(n%10);
      n=n/10;
    }
  printf("the sum of all %d is:%d",n,sum);
}