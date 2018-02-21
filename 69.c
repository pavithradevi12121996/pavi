#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sub=0;
clrscr();
printf("enter value of a,b");
scanf("%d%d",&a,&b);
sub=a-b;
if(sub%2==0)
{
printf("number is even ");
}
else
{
printf("number is odd");
}
getch();
}
