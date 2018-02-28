#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int count=0,i;
printf("enter words");
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++)
{
while(a[i]==' ')
{
i++;
count++;
}
}
printf("%d",count+1);
getch();
}
