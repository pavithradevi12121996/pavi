#include<stdio.h>
#include<conio.h>
void main()
{
int n,digit,rev=0;
printf("enter number");
scanf("%d",&n);
while(n!=0)
{
digit=n%10;
n=n/10;
rev=rev*10+digit;
}
printf("%d",rev);
getch();
}
