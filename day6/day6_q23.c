//Write a program to count set bits in a number
#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Enter a positive number");
        return 0;
    }

    while(n > 0)
    {
        if((n & 1) == 1)
        {
            count++;
        }

        n = n >> 1;
    }

    printf("The number of set bits is: %d", count);

    return 0;
}