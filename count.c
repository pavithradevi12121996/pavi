#include<stdio.h>
int main()
{
int n=57643,count=0;
while(n!=0)
{
n=n/10;
n/=10;
++count;
printf("digits are",count);
return 0;
}
