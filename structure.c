#include<stdio.h>
struct book{
int num;
char name[50];
float price;
};
int main(){
  struct book hp;
  hp.num=1;
  hp.price=100.00;
  strcpy(hp.name,"Harry Potter");
  printf("Book number:%d\n",hp.num);
  printf("Book name:%s\n",hp.name);
  printf("Book price:%f\n",hp.price);
}