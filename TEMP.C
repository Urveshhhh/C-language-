#include<stdio.h>
#include<conio.h>
void main(){
 int a,b;
 float c;
 clrscr();
 printf("enter value you any to convert\n");
 scanf("%d",&a);
 printf("enter your choice\n");
 printf("\n1 convert given value to celsius");
 printf("\n2 convert given value to fehrenheit\n");
 scanf("%d",&b);
 switch(b){
 case 1: {
 c=(a*9/5)+32;
 printf("celsius= %f",c);
 break;
 }
 case 2: {
 c=(a-32)*5/9;
 printf("fehrenheit= %f",c);
 break;
 }
 default :{
 printf("invalid number");
 }
 }
 getch();
 }