// write a program to find the factorial of a given number
#include <stdio.h>
int main()
{
  int i , n, fact=1;
  printf("enter the number you want factorial of:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
      fact=fact*i;
      }
  printf("the factorial of the number is:%d",fact);
 return 0;
}