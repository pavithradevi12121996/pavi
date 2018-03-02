#include<stdio.h>
 #include<conio.h>
 void main()
 {
 float a;
 int b,c;
 printf("enter number ");
 scanf("%f",&a);
 b=a;
 c=b+1;
 if(c%b==1)
 {
 printf("%d", c);
 }
 else
 {
 printf("%d",c-1);
 }
 getch();
 }
