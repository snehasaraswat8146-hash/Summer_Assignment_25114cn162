// write a program to recursive fibonacci series
#include <stdio.h>
int fib(int n)
{
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);

    }
    }
    int main()
    {
        int n;
        printf("number:");
        scanf("%d",&n);
        printf("fibonacci of %d is %d",n,fib(n));
        return 0;
    }