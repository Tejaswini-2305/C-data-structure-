#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

struct Node{
    int key;
    int value;
struct Node* next;
};
struct Node* hashTable[TABLE_SIZE];
int hashFunction(int key){
  return key%TABLE_SIZE;
}
void insert(int key, int value){
  int hashIndex = hashFunction(key);
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->key = key;
  newNode->value = value;
  newNode->next = NULL;

  if(hashTable[hashIndex] == NULL){
    hashTable[hashIndex] == newNode;
  }else {
    newNode->next = hashTable[hashIndex];
    hashTable[hashIndex] = newNode;
  }
}
int search(int key){
  int hashIndex = hashFunction(key);
  struct Node* currentNode = hashTable[hashIndex];

  while (currentNode != NULL){
    if (currentNode->key == key){
      return currentNode->value;
    }
    currentNode = currentNode->next;
  }
  return -1;
}
void display(){
  for (int i=0;i<TABLE_SIZE;i++){
    struct Node* currentNode = hashTable[i];
    printf("Index %d:",i);
    while (currentNode != NULL){
      printf("(%d, %d) ->",currentNode->key, currentNode->value);
      currentNode = currentNode->next;
    }
    printf("NULL\n");
  }
}
int main(){
  for (int i=0; i<TABLE_SIZE;i++){
    hashTable[i] = NULL;
  }
  insert(1,10);
  insert(11,20);
  insert(21,30);
  insert(2,40);
  insert(12,50);
  display();
  int value = search(21);
  if (value != -1){
    printf("Value for key 21:%d\n",value);
  }else{
    printf("Key 21 not found\n");
  }
  return 0;
}







  
    