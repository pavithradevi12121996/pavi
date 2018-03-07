#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int n;
clrscr();
printf("enter the input");
scanf("%s",a);
strcpy(b,a);
strrev(a);
n=strcmp(a,b);
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
