include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("prime");
printf("enter value for n");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==1)
{
printf("prime numbers are %d",n);
}
}
getch();
}
