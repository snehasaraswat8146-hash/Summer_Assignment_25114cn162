// write a program to recursive sum of digits
#include <stdio.h>
int sum(int n)
{
    if(n==0){
        return 0;
    }
    else{
        return (n%10)+sum(n/10);

    }
    }
    int main()
    {
        int n;
        printf("enter number");
        scanf("%d",&n);
        printf("sum of digits of %d is %d",n,sum(n));
        return 0;
    }