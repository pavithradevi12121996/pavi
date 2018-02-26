#include<stdio.h>
#include<conio.h>
void main()
{
int count=0,digit=0,i,j;
char str[10];
printf("enetr ur string");
scanf("%d",&str);
for(i=0;i<str;i++)
{
if(str>=65&&str<=90)
{
count++;
}
if(str>=0&&str<=9)
{
digit++;
}
if(count>=1&&digit>=1)
{
printf("yes");
}
else
{
printf("no");
}
}
getch();
}
