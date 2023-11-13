#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
 char c;
 printf("enter alpha");
 scanf("%c", &c);
 if(isalpha(c) > 0)
 printf("this is alphabet");
 else if ( isdigit (c) > 0)
 printf("this is digit");
 else printf("this is symbol");
 getch();
 }