#include<stdio.h>
#include<conio.h>
void main()
{
int num,digit,rev=0;
printf("enter number");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
rev=rev*10+digit;
num=num/10;
}
printf("multiplication is %d",rev);
getch();
}

