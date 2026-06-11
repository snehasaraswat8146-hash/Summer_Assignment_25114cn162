// Write a program to write a function to check prime.
#include <stdio.h>
void prime(int n)
{
   int i,flag=0;
   if(n<=1){
     printf("not a prime number");
     return;
      }
  for(i=2;i*i<=n;i++){
     if(n%i==0){
       flag=1;
       break;
       }
    }
if(flag==1){
  printf("not prime");
    }
else{
  printf("prime");
}
return;
   }

int main()
{
  int n ;
  printf("the number is : ");
  scanf("%d",&n);
   prime(n);
   
   
return 0;
}
