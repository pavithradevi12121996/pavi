#include<stdio.h>
#define size 10
int main()
{
int a[size],i,n;
printf("enter array element");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
printf("\narray %d",a[i]);
}
int min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
	min=a[i];
printf("\n%d",a[i]);
}
}
return 0;
}

