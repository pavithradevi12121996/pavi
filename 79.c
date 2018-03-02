#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
printf("enter two number");
scanf("%d%d",&a,&b);
c=a*b;
printf("product of two is %d",c);
d=c/a;
if(d==a)
{
printf("\nnumber is perfect square");
}
else
{
printf("\nnumber is not square");
}
getch();
}
