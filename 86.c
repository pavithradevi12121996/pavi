
#include <stdio.h>

int main()
{
	char b[10];
	int i,flag=0,j;
	scanf("%s",b);
	for(i=0;b[i]!='\0';i++)
	{
		for(j=i+1;b[j]!=0;j++)
		{
			if(b[i]==b[j])
			{
				printf("no");
				flag=1;
				break;
			}
		}
		if(flag==1)
		break;
	}

if(flag==0)
{
	printf("yes");
}
	return 0;
}
