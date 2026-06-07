// Write a program to convert binary to decimal

#include <stdio.h>
int main()
{
 int n,digit,decimal=0,power=1;
 printf("enter the number:");
 scanf("%d",&n);
 if(n==0){
  printf("the output is 0");
  return 0;
}
if (n<0){
   printf("enter a positive number");
   return 0;
}
while(n>0){
digit=n%10;
if(digit != 0 && digit != 1)
{
    printf("Invalid binary number");
    return 0;
}
decimal=decimal+digit*power;
power=power*2;
n=n/10;
}
 
 printf("the decimal number is: %d", decimal);
 return 0;
 }
 
