//Write a program to find product of digits 
#include <stdio.h>
int main( )
{
 int n,i, prod=1;
 printf(" enter the number you want to print the product of digits of:");
scanf("%d",&n);
while(n>0){
    prod*=n%10;
    n=n/10;
}
printf(" the product of digits is :%d" , prod);
return 0; 
}