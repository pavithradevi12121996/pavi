#include<stdio.h>
int main()
{
int a[20],min,n,max,i,j;
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("\nelements are %d",a[i]);
}
printf("\nminimum element");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
	min=a[0];
if(a[i]<a[j])
{
	min=a[i];
	i++;


printf("\nmin ele is %d",min);
}
}
}
printf("maximum");
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		max=a[0];
		if(a[j]>a[i])
	
		{
			
			max=a[j];
			j++;
			
		printf("\nmaximum %d",max);

			
		}
	}
}	
return 0;
}


