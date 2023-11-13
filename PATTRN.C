#include<stdio.h>
#include<conio.h>
void main{
 int i,j,row;
 printf("enter value of row");
 scanf("%d",&row);
 for(i=0; i<=row; i++){
  for(j=0; j<=i; j++){
  printf("*",j);
  }
  }
  getch();
  }
