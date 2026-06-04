//Write a program to Find GCD of two numbers. 
#include <stdio.h>
int main()
{
 int i,GCD, n1,n2;
 printf("enter the first number you want to find the GCD of:");
 scanf("%d",&n1);
 printf("enter the second number you want to find the GCD of:");
 scanf("%d",&n2);
 for(i=1;i<=n1 && i<=n2;i++){
    if(n1%i==0 && n2%i==0){
        GCD=i;
      
         }
    }
 printf("the GCD is:%d",GCD);
 return 0;
}
