#include<stdio.h>
int main()
{
int a,b[20],i,j,max;
printf("\nenter no of elements");
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
printf("\nelements are %d",b[i]);
}
max=b[0];
for(i=0;i<a;i++)
{
	
	for(j=i+1;j<a;j++)
	{
		
	if(b[i]<b[j])
	{
		max=b[j];
		
	}
	
	
	}
}

	printf("\nmaximum are %d",max);

return 0;
}
