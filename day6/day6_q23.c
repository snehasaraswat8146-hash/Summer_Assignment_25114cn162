//Write a program to count set bits in a number
#include <stdio.h>
int main()
{
    int n, count=0;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<0){
        printf("enter a positive number");
        return 0;
    }
    while(n>0){
        if(n%2==1)
        {
            count++;
        }
        n=n/2;
    }
    printf("the number of set bits is: %d", count);
    return 0;}
