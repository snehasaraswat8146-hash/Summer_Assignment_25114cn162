// Write a program to write a function to find the sum of two numbers
#include <stdio.h>
int sum(int a, int b)
{
  int add = a+b;
  return (add);
}
int main()
{
  int a,b,addition;
  printf("the first number is :");
  scanf("%d",&a);
  printf("the second number is :");
  scanf("%d",&b);
  addition=sum(a,b);
  printf("the sum of the two numbers is: %d",addition);
return 0;
}
  