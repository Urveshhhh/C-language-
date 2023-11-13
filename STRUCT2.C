#include<stdio.h>
#include<conio.h>
struct person{
 char name[20];
 int num;
 float marks;
 };
 void main(){
 struct person student;
 printf("input values");
 scanf("%s %d %f",
       student.name,
       &student.num,
       &student.marks);
 printf("name=%s number=%d marks=%f",
       student.name,
       student.num,
       student.marks,);
 getch();
 }
