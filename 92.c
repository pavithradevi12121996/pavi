#include<stdio.h>
#include<conio.h>
void main()
{
int num,digit,sum=0;
printf("enter number");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
sum=sum+digit;
num=num/10;
}
printf("multiplication is %d",sum);
getch();
}

