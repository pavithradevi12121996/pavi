#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
printf("enter value of n");
scanf("%d",&n);
for(i=5;i<50;i++)
{
if(i%5==0)
{
printf("numbers are %d",i);
}
}
getch();
}
