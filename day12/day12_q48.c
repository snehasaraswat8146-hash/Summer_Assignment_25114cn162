//Write a program to write a function for perfect number
#include <stdio.h>
void perfect_no(int n)
{
  int i,sum=0,p;
  if(n<=1){
    printf("not considered perfect number");
    return;
   }
for(i=1;i*i<=n;i++){
   if(n%i==0){
     p=n/i;
     if(i==1){
       sum=sum+i;
       }
     else if(i==p){
         sum=sum+i;
        }
     else{
        sum=sum+i+p;
       }
   } 
}
   if(sum==n){
     printf("perfect no");
     }
   else{
     printf("not perfect no");
     }
  return;
}
int main()
{
  int n;
  printf("enter the number you want to check:");
  scanf("%d",&n);
  perfect_no(n);
    return 0;
  }
  
