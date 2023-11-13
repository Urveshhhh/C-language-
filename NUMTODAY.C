#include<stdio.h>
#include<conio.h>
void main()
{
 int n,days,m;
 clrscr();
 printf("enter value of n");
 scanf("%d", &n);
 m=n/30;
 days=n%30;
 printf("months=%d, days=%d", m,days);
 getch();
 }

