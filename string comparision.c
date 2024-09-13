#include <stdio.h>
void main(){
  char str1[10],str2[10];
  printf("Enter the string1:");
  scanf("%s",str1);
  printf("Enter the string2:");
  scanf("%s",str2);
  int result=strcmp(str1,str2);

  if (result==0){
    printf("the strings are equal");
    }
  else if (result<0){
    printf("%s comes before %s",str1,str2);
  }
  else {
    printf("%s comes after %s",str1,str2);
  }
}
  
  
