##include<stdio.h>
#include<conio.h>
void main()
{
int a,b,o,d,e;
printf("enter two values");
scanf("%d%d",&a,&b);
printf("enter operator");
scanf("%c",&o);
if(o=='/')
{
d=a/b;
printf("%d",d);
}
else if(o=='%')
{
e=a%b;
printf("%d",e);
}
else
{
printf("no operation");

}
getch();
}
