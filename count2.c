#include <stdio.h>
int main()
{
    long long n;
    int c=0;
    printf("Enter any number: ");
    scanf("%d", &n);
   while(n!=0)
    {     
       c++;
       n=n/10;
    }
    printf("Total digits: %d",c);
    return 0;
}
