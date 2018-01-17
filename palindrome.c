#include<stdio.h>
#include<conoi.h>
void main()
{
int rev=0,digit,n;
printf("enter n");
scanf("%d",&n);
while(n!=0)
{
digit=n%10;
rev=rev*digit+10;
n=n/10;
}
getch();
}
