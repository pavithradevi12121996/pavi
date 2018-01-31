#include<stdio.h>
int main()
{
int a[10],n,int max=a[0];
printf("enter no of element");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf(" \n array elements are %d",a[i]);
}
  if(a[i]>max)
  {
    printf("maximum element are %d",a[i]);
  }
return 0;
}
