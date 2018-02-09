#include<stdio.h>
int main()
{
int a[20],i,c,low,high,n;
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
printf("\nelements are %d",a[i]);
}
low=1;
high=n;
if(low<high)
{
	c=(low+high)/2;
	printf("\nmiddle is %d",c);
}
return 0;
}
