#include<stdio.h>
#include<conio.h>
void main()
{
int n,b,c;
clrscr();
printf("enter number");
scanf("%d",&n);
c=n%10;
if(c<=9)
{
b=(n-c);
printf("%d",b+10);
}
getch();
}

