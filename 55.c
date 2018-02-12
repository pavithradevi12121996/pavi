#include<stdio.h>
int main()
{
int a,b,c;
printf("enter two number ");
scanf("%d%d",&a,&b);
c=(a*b);
if(c%2==0)
{
printf("\nproduct of two is even %d",c);
}
else 
{
printf("\nproduct of two is odd %d",c);
}
return 0;
}
