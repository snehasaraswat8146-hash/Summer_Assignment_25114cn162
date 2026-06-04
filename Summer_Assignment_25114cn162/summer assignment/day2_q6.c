// write a program to reverse a number
#include <stdio.h>
int main()
{
  int rev=0, n,temp;
  printf("enter the number:");
  scanf("%d",&n);
  while(n!=0){
  temp=n%10;
  n=n/10;
  rev=rev*10+temp;
  }
  printf("the reversed number is:%d",rev);
return 0;
}
