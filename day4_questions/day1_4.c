// write a program to find the count of the digits in a number
#include <stdio.h>
int main()
{
    int  n, count=0;
  printf("enter the number:");
  scanf("%d",&n);
  while(n!=0){
   n=n/10;
   count=count+1;
}
printf("the number of digit is:%d",count);
return 0;
}