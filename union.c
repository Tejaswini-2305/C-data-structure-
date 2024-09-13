#include<stdio.h>
union book{
int num;
char name[20];
float price;
};
int main(){
  union book hp;
  hp.num=10;
  hp.price=22.5;
  strcpy(hp.name,"Hello");
  printf("Book number:%d\n",hp.num);
  printf("Book name:%s\n",hp.name);
  printf("Book price:%f\n",hp.price);
}