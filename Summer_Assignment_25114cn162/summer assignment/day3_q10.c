// Write a program to check whether a number is palindrome
#include <stdio.h>
int main( )
{
 int n,rev=0,num,temp;
 printf(" enter the number you want to check:");
scanf("%d",&n);
temp=n;
while (n!=0)
{
num=n%10;
rev= rev*10+num;
n=n/10;
}
if(rev==temp){
   printf("the number is palindrome %d",temp);
}
else{
printf("the number is not palindrome %d",temp);
}
return 0; 
}