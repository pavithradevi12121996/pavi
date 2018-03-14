#include<stdio.h>
#include<conio.h>
void main()
{
int b,e,r=1;
printf("enter base");
scanf("%d",&b);
printf("enter expo");
scanf("%d",&e);
while(e!=0)
{
r=r*b;
--e;
}
printf("%d",r);
getch();
}
