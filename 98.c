#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[10],j;
printf("enter n");
scanf("%d",&n);
printf("enter number");
for(j=0;j<=n;j++)
{
scanf("%d",&a[j]);
}
for(j=0;j<=n;j++)
{
if(a[j]!=j)
{
printf("%d",j);
}
}
getch();
}
