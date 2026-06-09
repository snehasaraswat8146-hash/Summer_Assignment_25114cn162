
// write a program to recursive factorial of number
# include <stdio.h>
int factorial (int n)
{

 if(n==0 || n==1){
   return 1;
}
else{
  return n*factorial(n-1);
}
}
int main()
{
 int n,fact;
 printf("enter a number");
 scanf("%d",&n);
 if(n < 0)
{
    printf("Factorial is not defined for negative numbers");
    return 0;
}
 fact=factorial (n);
 printf("the factorial is:%d",fact);
return 0;
}