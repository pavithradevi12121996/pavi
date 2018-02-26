#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("enter c");
scanf("%d",&c);
if(a>=c<=b)
{
printf(" \n number is between a and b%d",c);
}
else

{
printf("number is not between a and b");
}
getch();
}
