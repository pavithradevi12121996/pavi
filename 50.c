#include<stdio.h>
int main()
{
	int b,e,r=1;
	printf("\nenetr base");
	scanf("%d",&b);
	printf("\nenter exponnent");
	scanf("%d",&e);
	while(e!=0)
	{
	r=r*b;
	--e;
	}
printf("\npower is %d",r);
return 0;
}
