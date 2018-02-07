#include<stdo.h>
int main()
{
int a,b;
printf("enter two marks");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("after swap %d",a,b);
return 0;
}

