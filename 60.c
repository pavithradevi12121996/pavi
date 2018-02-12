#include<stdio.h>
int main()
{
	int n,a=0,b=1,c,i;
	printf("enter number");
	scanf("%d",&n);
	printf("\nfibonacci number ");
	for(i=0;i<n;i++)
	{
	c=a+b;
	a=b;
	b=c;
	c=a;
	printf("\n%d",c);
	}
	return 0;
}

