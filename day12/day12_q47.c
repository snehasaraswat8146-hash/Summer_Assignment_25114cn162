//Write a program to write a function for Fibonacci
#include <stdio.h>
void fibonacci(int n)
{
  int a=0,b=1,i,c;
  if(n<=0){
    printf("enter positive number");
    return;
    }
  else if(n==1){
         printf("%d",a);
         return;
          }
else if(n>=2){
       
  printf("%d",a);
  printf("%d",b);
  for(i=0;i<n-2;i++){
      c=a+b;
      printf("%d",c);
      a=b;
      b=c;
}
return;
}
else{
   printf("invalid");
  return;
}
     
  return;
}
int main()
{
  int n;
  printf("enter the number you want to check:");
  scanf("%d",&n);
  fibonacci( n);
   return 0;
  }
  
