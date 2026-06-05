// Write a program to find the largest prime factor
 
#include <stdio.h>
int main()
{
 int n,i,largest=0;
 printf("enter the number:");
 scanf("%d",&n);
 if(n <= 0)
{
    printf("Enter a positive number");
    return 0;
}
for(i=2;i*i<=n;i++){
   while(n%i==0){
     largest=i;
     n=n/i;
     
    }
}

if(n>1){
 largest=n;
}
printf("the highest prime factor is: %d",largest);

 return 0;
}
