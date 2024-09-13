#include <stdio.h>
int add(int a, int b);
int main(){
  int num1, num2, sum;
  printf("enter two numbers");
  scanf("%d %d", &num1, &num2);
  sum = add(num1, num2);

  printf("sum = %d", sum);
}
int add(int a, int b){
  return a+b;
}

