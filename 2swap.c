#include<stdio.h>

int main()
{
int a,b;
printf("enter two marks");
scanf("%d%d",&a,&b);
void swap(a,b);
printf("after swap %d\n%d",a,b);
}
void swap(a,b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("value of %d%d",a,b);
	return 0;
}
