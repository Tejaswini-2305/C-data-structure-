#include <stdio.h>
int main()
{
  int a,b;
  char oper;
  printf("Enter the number 1:");
  scanf("%d",&a);
  printf("Enter the number 2:");
  scanf("%d",&b);
  printf("Enter the operator(+,-,*,/):");
  scanf(" %c",&oper);
  if (oper == '+') {
    printf("The sum is %d\n",a + b);
  }else if (oper == '-') {
    printf("The subtraction is %d\n",a - b);
  }else if (oper == '*') {
    printf("The multiplication is %d\n",a * b);
  }else if (oper == '/') {
    if (b != 0) {
      printf("The division is %d\n",a / b);
    }else {
      printf("The division by zero is not allowed\n");
    }
  }else {
      printf("Invalid operator\n");
    }
  }
