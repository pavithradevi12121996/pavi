#include<stdio.h>
int main()
{
int a[10],i,n;
printf("enter array element");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("\narray %d",i);
}
int min=a[i],temp,j;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(min<a[i])
{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
printf("%d",a[i]);
}
}
}
return 0;
}

