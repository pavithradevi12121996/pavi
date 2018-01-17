#include<stdio.h> 
int main()
{
int n,k,i
printf("enter two values");
scanf("%d%d",&n&k);
for(i=n;i<k;i++)
{
n=n*i;
}
printf("power is %d",n);
}
