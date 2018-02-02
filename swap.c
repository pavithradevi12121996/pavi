#include<stdio.h>
int main()
{
int n1,n2;
printf("enter two numbers");
scanf("%d%d",&n1,&n2);
printf("\nbefore swap %d %d",n1,n2);
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
printf("\nafter swap %d %d",n1,n2);
return 0;
}
