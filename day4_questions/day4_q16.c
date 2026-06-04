// Write a program to print Armstrong numbers in a range
#include <stdio.h>

int main()
{
    int start, end, i;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers are: ");

    for(i = start; i <= end; i++)
    {
        int n = i;
        int temp = i;
        int sum = 0, count = 0;

        // count digits
        while(temp != 0)
        {
            count++;
            temp = temp / 10;
        }

        temp = n;

        // Armstrong check
        while(temp != 0)
        {
            int digit = temp % 10;

            int power = 1;
            int j;

            for(j = 0; j < count; j++)
            {
                power = power * digit;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        if(sum == n)
        {
            printf("%d ", n);
        }
    }

    return 0;
}