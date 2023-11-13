#include<stdio.h>
#include<conio.h>
void main()
{
 int age,weight;
 clrscr();
 printf("enter age");
 scanf("%d",&age);
 printf("enter weight");
 scanf("%d",&weight);
 if(age >= 18 && weight > 45) {
 printf("eligible"); }
 else {printf("not eligible"); }
 getch();
 }