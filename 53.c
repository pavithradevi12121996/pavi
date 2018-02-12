
#include<stdio.h>
int main()
{
int a,b[20],i,sum=0;
printf("\nenter no of elements");
scanf("%d",&a);
for(i=1;i<a;i++)
{
scanf("%d",&b[i]);
printf("\nelements are %d",b[i]);
sum=(sum+i);
}
printf("\nsum is %d",sum);
return 0;
}
