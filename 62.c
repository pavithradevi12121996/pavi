 #include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter string");
scanf("%d",&a);
b=a/10;
if(((a%10==0)||(a%10==1))&&((b%10==0)||(b%10==1)))
{
printf("binary");
}
else
{
printf("not binary");
}
getch();
}


