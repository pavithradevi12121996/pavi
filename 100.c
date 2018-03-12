#include<stdio.h>
#include<conio.h>
void main()
{
int num,digit,mul=1;
printf("enter number");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
mul=mul*digit;
num=num/10;
}
printf("multiplication is %d",mul);
getch();
}

