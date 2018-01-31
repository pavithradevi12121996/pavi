#include<stdio.h>
int main()
{
int a[10],n,i,max=a[0];
printf("enter no of element");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf(" \n array elements are %d",a[i]);
}
  max=a[0];
  for(i=1;i<n;i++)
  {
  if(a[i]>max)
  {
    max=a[i];
    printf("maximum element are %d",max);
  }
  }
return 0;
}
