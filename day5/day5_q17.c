// Write a program to check perfect number

//divisors come in pairs, so iterate only till √n...O(√n) 
//Jiska apne divisors ka sum usi ke barabar ho, wahi perfect number hai.

#include <stdio.h>
#include <math.h>
int main()
{
 int n,sum=1,i,p;
 printf("enter the number:");
 scanf("%d",&n);
 if(n==1){
    printf("the number is not a perfect number");
    return 0;
         }
 if(n<=0){
    printf(" perfect number is only defined for positive numbers");
    return 0;
         }
 for(i=2;i*i<=(n);i++){
        if(n%i==0){
           p=n/i;
           if(i==p){
               sum=sum+i;
          
           }
        else{
             sum=sum+i+p;
               }
         }
        
}
if(sum==n){
  printf("the number is perfect number:%d",n);
    }
else{
   printf("the number is not perfect number:%d",n);
    }
return 0;
}

