#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char a[10];
	scanf("%s",a);
	int n,m,i;
	scanf("%d",&n);
	m=strlen(a);
	for(i=n;i<m;i++)
	{
		printf("%c",a[i+n]);
	}
	return 0;
}
