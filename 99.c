#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
printf("enter three number");
scanf("%d%d%d",&a,&b,&c);
d=(a*b)%c;
printf("answer is %d",d);
getch();
}
