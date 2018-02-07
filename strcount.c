#include<stdio.h>
int main()
{
	int count=0;
	char str[20];
	printf("enter some string");
	scanf("%s",str);
	if(str==","||str=="."||str=="$"||str=="*"||str=="^"||str=="@")
	{
		count++;
		printf("count %d",count);
	}
return 0;
}

