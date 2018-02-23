#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,count;
clrscr();
count=0;
printf("Enter the number:");
scanf("%d",&num);
for(i=2;i<num;i++)
{
if(num%i==0)
{
count++;
}
}
if(count==0)
{
printf("Number is prime");
}
else
{
printf("Number is not prime");
}
getch();
}
