#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("enter value of a b c");
 scanf("%d %d %d", &a,&b,&c);
 if ( a>b)
 {
  if(a>c)
  { printf("a is max"); }
  else
  { printf("  c is max" ); }
 }
 else if(b>c)
 { printf("b is max"); }
 else
 { printf("c is max"); }
  getch();
 }