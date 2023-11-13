#include<stdio.h>
#include<conio.h>
struct state{
 char name[20];
 int population;
 int district;
 };
 void main(){
 struct state s;
 clrscr();
 printf("enter \n state name \n population \n district \n");
 scanf("%s %d %d",
       s.name,
       &s.population,
       &s.district);

 printf("state name=%s population=%d district=%d",
	s.name,
	s.population,
	s.district);
       getch();
       }