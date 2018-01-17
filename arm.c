#include<stdio.h>
#include<conio.h>
void main()
{
int digit,rev=0,n;
clrscr();
printf("enter value of n");
scanf("%d",&n);
while(n!=0)
{
digit=n%10;
rev=rev*digit*digit*digit;
n=n/10;
}
getch();
}
