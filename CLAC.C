#include<stdio.h>
#include<conio.h>
void main(){
 int n1,n2,ans,n3;
 printf("enter number 1");
 scanf("%d", &n1);
 printf("enter number 2");
 scanf("%d",&n2);
 printf("choose your choice");
 printf("\n1 subraction");
 printf("\n2 addition");
 printf("\n3 division");
 printf("\4 multiplication");
 printf("enter your choice");
 sacnf("%d", &n3);
 switch(n3){
  case 1:{
  ans=n1-n2;
  printf(" ans %d", ans);
  break; }

  case 2:{
  ans=n1+n2;
  printf(" ans %d", ans);
  break; }

  case 3:{
  ans=n1/n2;
  printf(" ans %d", ans);
  break; }

  case 4:{
  ans=n1*n2;
  printf(" ans %d", ans);
  break; }

  case 5:{
  printf(" number is invalid");
   }
 }
 getch();
 }