#include<stdio.h>
#include<conio.h>
void main(){
 int pl,wt,oa,per,grade;
 printf("enter marks of pl wt oa");
 scanf("%d %d %d", &pl,&wt,&oa);
 per=(pl+wt+oa)/3;
 if(per>=75)
 printf("distinction");
 else if(per>=60)
 printf("first class");
 else if (per>=50)
 printf("second class");
 else if (per>=40)
 printf("third class");
 else
 printf("fail");
 getch();
 }