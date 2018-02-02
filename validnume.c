#include<stdio.h>
int main(void)
{
	char s[50];
	int c=0,i;
	scanf("%s",&s);
  for(i=0;i<='\0';i++)
	{
	if((s[i]>='0')&&(s[i]<='9'))
  c++;
	}
	if(c>=1)
	printf("The given string is numeric");
	else
	printf("Not numeric");
	return 0;
}
