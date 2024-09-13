#include <stdio.h>
void main(){
  int n,i;
  char str[50];
  printf("Enter the number of elements:");
  scanf("%d",&n);
  printf("Enter the str:");
  scanf("%s",&str);
  for(i=1;i<=n;i++){
    printf("%c\n",str[i]);
  }
}

  
  
