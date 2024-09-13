#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 50
int arr[MAXSIZE ];
int size=0;
void display(){
  int i;
  if(size==0){
    printf("Array is empty\n");
  }else {
    for(i=0;i<size;i++){
      printf("%d",arr[i]);
    }
    printf("\n");
  }
}
void insertAtPosition(int position,int element){
  int i;
  for(i=size;i>position;i--){
    arr[i]=arr[i-1];
  }
  arr[position]=element;
  size++;
}
void deleteAtPosition(int position){
  int i;
  for(i=position;i<size-1;i++){
    arr[i]=arr[i+1];
  }
  size--;
}
int main()
{
  while(1){
    printf("1. Insert END\n");
    printf("2, Insert at position\n");
    printf("3. Delete at position\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    int choice;
    int position;
    int element;
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    switch(choice) {
      case 1:
      if (size == MAXSIZE) {
        printf("Array is full\n");
        break;
      }
      printf("Enter the element to be inserted\n");
      scanf("%d",&element);
      arr[size] = element;
      size++;
      break;
      case 2:
      if(size == MAXSIZE) {
        printf("Array is full\n");
        break;
      }
      printf("Enter the position to be inserted: ");
      scanf("%d", &position);
      if (position < 0) {
        printf("Invalid position\n");
        break;
      }
      printf("Enter the element to be inserted: ");
      scanf("%d", &element);
      insertAtPosition(position, element);
      break;
      case 3:
      if(size == 0) {
        printf("Array is empty\n");
        break;
      }
      printf("Enter the position to be deleted: ");
      scanf("%d", &position);
      if (position < 0 || position >= size) {
        printf("Invalid positin\n");
        break;
      }
      deleteAtPosition(position);
      break;
      case 4:
      display();
      break;
      case 5:
      exit(0);
      default:
      printf("Invalid choice\n");
    }
  }
  return 0;
}
    
      
    
    
      
      
      
    
  
