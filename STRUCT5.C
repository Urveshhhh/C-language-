 #include<stdio.h>
 #include<conio.h>
 struct state{
 char *name;
 int dist;
 int pop;
 };
 struct population{
 int men;
 int women;
 struct.state.s1;
 };
 void main(){
 struct population p;
 clrscr();
 printf("enter state name");
 scanf("%s",p.s1.name);
 printf("enter district");
 scanf("%d",&p.s1.dist);
 printf("enter men's population");
 scanf("%d",&p.men);
 printf("enter women's population");
 scanf("%d",&p.women);
 p.s1.pop= p.men + p.women;

 printf("state name is %s", p.s1.name);
 printf("district is %d", p.s1.dist);
 printf("total population is %d", p.s1.pop);
 getch();