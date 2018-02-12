#include<stdio.h>
int main()
{
int n;
printf("enter number");
scanf("%d",&n);
if(n%2==0)
{
	printf("\neven number %d",n);
}
else
{
	n--;
	printf("\nlessereven  number%d",n);
}
return 0;
}
