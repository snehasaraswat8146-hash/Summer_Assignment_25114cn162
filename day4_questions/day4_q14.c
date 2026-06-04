// write a program to find nth Fibonacci term
#include <stdio.h>
int main()
{
 int a=0,b=1,c=0,i,n;
 printf("enter the number:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
 c=a+b;
 a=b;
 b=c;
}
printf("the nth Fibonacci term is:%d",a);
 return 0;
}
