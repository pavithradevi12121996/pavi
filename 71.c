#include<stdio.h>
#include<string.h>
void main()
{
char b[100],c[100];
int n;
clrscr();
printf("enter the input");
scanf("%s",b);
strcpy(c,b);
n=strcmp(c,b);
if(n==0)
{
printf("YES");
}
else
{
printf("NO");
}
getch();
}
