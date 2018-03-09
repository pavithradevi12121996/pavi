#include<stdio.h>
#include<conio.h>
void main()
{
int b,e,r=1,a,c,d;
printf("enter base");
scanf("%d",&b);
printf("exponent");
scanf("%d",&e);
while(e!=0)
{
r=r*b;
--e;
}
printf("numbers are %d",r);
if(r>=3076)
{
printf("no war");
}
else
{
printf("enter a");
scanf("%d",&a);
printf("enter c");
scanf("%d",&c);
d=c-a;
printf("%d",d);
}
getch();
}
