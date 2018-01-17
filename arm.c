#include<stdio.h>
void main()
{
int digit,rev=0,n;
printf("enter value of n");
scanf("%d",&n);
while(n!=0)
{
digit=n%10;
rev=rev*digit*digit*digit;
n=n/10;
}
  if(n==rev)
    printf("number is armstrong");
  else
    printf("number is not armstrong");
  
}
