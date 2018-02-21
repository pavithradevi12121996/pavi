#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum=0;
clrscr();
printf("enter value of a,b");
scanf("%d%d",&a,&b);
sum=a+b;
if(sum%2==0)
{
printf("number is even ");
}
else
{
printf("number is odd");
}
getch();
}
