#include<stdio.h>
#include<conio.h>
void main()
{
int d,a,b,c,e,f;
clrscr();
printf("enter digits");
scanf("%d",&d);
a=d/10;
c=a%10;
e=a/10;
f=d%10;
printf("sum is %d",c+e+f);
getch();
 }
