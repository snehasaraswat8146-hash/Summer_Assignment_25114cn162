// Write a program to write a function to find the factorial.
#include <stdio.h>
void fact(int n)
{
   int i,factorial=1;
    if(n<0){
      printf("enter a positive number");
      return;
      }

   if(n==1 || n==0){
      printf("factorial for number is 1");
      return;
      }
   for(i=1;i<=n;i++){
       factorial=factorial*i;
       }
    printf("%d",factorial);
   return;
   }

int main()
{
  int n ;
  printf("the number is : ");
  scanf("%d",&n);
  fact(n);
return 0;
}
