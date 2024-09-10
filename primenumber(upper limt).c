#include <stdio.h>
int main()
{
  int i,j,flag,n;
  printf("enter the upper limit:");
  scanf("%d",&n);

  for(i = 2; i <=n ;i++){
    flag = 0;

    for(j = 2; j <i;j++){
      if(i%j == 0){
        flag = 1;
        break;
      }
    }
      if(flag==0)
        printf("%d is a prime number\n",i);
      else
        printf("%d is not a prime number\n",i);
    
  }
}

  
  
