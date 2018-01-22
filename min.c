#include<stdio.h>
int main()
{
int min,hours,tmin;
printf("enter total min");
scanf("%d",&min);
hours=min/60;
tmin=min%60;
printf("%d %d",hours,min);
return 0;
}
