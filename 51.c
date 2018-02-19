
#include<stdio.h>
#include<conio.h>
void main()
{
int d,a,b,e,c;
clrscr();
printf("enter digits");
scanf("%d",&d);
b=d/10;
e=b/10;
c=b%10;
a=d%10;
printf("%d %d %d",e,c,a);
getch();
}

