#include<stdio.h>
void test(){
  int n;
  printf("enter the value for n:");
  scanf("%d",&n);
  if(n%2==0){
    printf("The given number is even\n");
  }else {
    printf("The given number is odd\n");
  }
}
int main(){
test();
}
