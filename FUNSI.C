#include<stdio.h>
#include<conio.h>
int si(int, int, int);
void main(){
 int y,z,a,u;
 printf( "enter p r n" );
 scanf("%d %d %d", &y, &z, &a);
 u=si(y,z,a);
 printf("ans=%d",u);
 getch();
}
 int si(int p, int r, int n){
 int i;
 i=(p*r*n)/100;
 return(i);
}
