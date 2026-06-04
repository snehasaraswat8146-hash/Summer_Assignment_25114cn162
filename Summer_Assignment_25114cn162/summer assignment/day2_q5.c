// Write a program to Find sum of digits of a number
#include <stdio.h>
int main()
{
  int n, sum=0;
  printf("enter the number:");
  scanf("%d",&n);
  while(n!=0){
    sum = sum + n % 10;
    n = n / 10;
     }
  printf("the sum of the digits of the number is:%d",sum);
 return 0;
}