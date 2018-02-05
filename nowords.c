#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int c;
printf("enter the string");
gets(str);
c=strlen(str);
printf("%d",c);
return 0;
}
