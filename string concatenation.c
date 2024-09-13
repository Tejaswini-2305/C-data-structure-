#include <stdio.h>
void main(){
  char str1[10],str2[10];
  printf("Enter the string1:");
  scanf("%s",str1);
  printf("Enter the string2:");
  scanf("%s",str2);
  strcat(str1,str2);
  printf("The concatenated string is %s",str1);
}
  
  
