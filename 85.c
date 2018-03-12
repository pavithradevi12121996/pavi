#include <stdio.h>
#include<string.h>
int main(void) {
	char b[10];
	int i,n;
	scanf("%s",b);
	n=strlen(b);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%c",b[i]);
		}
		
	}
	printf("\t");
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			printf("%c",b[i]);
		}
		
	}
	
	return 0;
}
