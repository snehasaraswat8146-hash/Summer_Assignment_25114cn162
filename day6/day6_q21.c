// Write a program to convert decimal to binary
#include <stdio.h>
int main()
{
 int n,r,digit=0,place=1;
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
     r =n%2;
     digit=digit+(r*place);
     place=place*10;
     n=n/2;
     }
     

 
 printf("the binary number is: %d",digit	);
 return 0;
 }
 

