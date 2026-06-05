// write a program to calculate the sum of n natural numbers
#include<stdio.h>
int main()
{
  int i , n, sum=0;
  printf("enter the number upto you want sum of:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
      sum=sum+i;
      }
  
   printf("the sum is: %d",sum);
return 0;
} 


