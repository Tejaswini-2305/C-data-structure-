#include <stdio.h>
int main()
{
  int i,n,flag=0;
  printf("enter the number");
  scanf("%d",&n);

  if(n<2){
    printf("not prime");
    return 0;
  }
  for (i=2;i<n;i++){
    if(n%i==0){
      flag=1;
      break;
    }
}
if (flag==0) {
   printf("prime number.\n");
} else {
    printf("not prime number.\n");
}
}

  
  
