#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("enter two num");
scanf("%d%d",&a,&b);
temp=a;
b=a^b;
a=a^b;
b=temp;
printf("%d %d",a,b);
getch();
}
