#include<stdio.h>
#include<conio.h>
int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
void main(){
 int no1,no2,p,ch;
 clrscr();
 printf("enter no1 & no2 \n");
 scanf("%d %d",&no1,&no2);

 printf("enter your choice \n");
 printf("\n 1 addition");
 printf("\n 2 subraction");
 printf("\n 3 multiplication");
 printf("\n 4 division");
 scanf("%d",&ch);
 switch(ch){

 case 1: {
 p = add(no1, no2);
 printf("ans = %d",p);
 break;
 }
 case 2: {
 p = sub(no1, no2);
 printf("ans = %d",p);
 break;
 }
 case 3: {
 p = mul(no1, no2);
 printf("ans = %d",p);
 break;
 }
 case 4: {
 p = div(no1, no2);
 printf("ans = %d",p);
 break;
 }
  default: {
  printf("invalid number");
  }
}
getch();
}
int add(int x,int y){
 int ans;
 ans= x+y;
 return ans;
 }
 int sub(int x,int y){
 int ans;
 ans= x-y;
 return ans;
 }
 int mul(int x,int y){
 int ans;
 ans= x*y;
 return ans;
 }
 int div(int x,int y){
 int ans;
 ans= x/y;
 return ans;
 }