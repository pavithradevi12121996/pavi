#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,r=1;
clrscr();
printf("enter valueof base a");
scanf("%d",&a);
printf("enter value of exponent");
scanf("%d",&b);
while(b!=0)
{
r=r*a;
--b;
}
printf("power is %d",r);
printf("\nnext power is %d",r*a);
getch();
}
