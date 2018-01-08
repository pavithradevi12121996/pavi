#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
printf("prime");
printf("enter value for n");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==1)
{
printf("prime ");
}
else
{
printf("not prime");
}
}
}

