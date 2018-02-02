#include<stdio.h>
int main()
{
int a[20],i,n,max;
printf("enter numbers");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
printf("maximum element %d",max);
}
return 0;
}

