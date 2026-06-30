// menu driven calculator
// wrote this while practicing switch case :)
#include <stdio.h>
int main()
{
    int choice;
    float num1, num2, result;

    do
    {
        printf("\nCALCULATOR\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("enter your choice : ");
        scanf("%d", &choice);

        // if user wants to exit no need to ask numbers
        if(choice == 5)
        {
            printf("calculator closed :)\n");
            break;
        }

        // taking inputs
        printf("enter first number : ");
        scanf("%f", &num1);

        printf("enter second number : ");
        scanf("%f", &num2);

        switch(choice)
        {
            case 1:
                // simple add
                result = num1 + num2;
                printf("answer = %.2f\n", result);
                break;

            case 2:
                // subtraction wala case
                result = num1 - num2;
                printf("answer = %.2f\n", result);
                break;

            case 3:
                // multiply both numbers
                result = num1 * num2;
                printf("answer = %.2f\n", result);
                break;

            case 4:
                // division can create problem if denominator = 0
                if(num2 != 0)
                {
                    result = num1 / num2;
                    printf("answer = %.2f\n", result);
                }
                else
                {
                    printf("can't divide by zero bro!\n");
                }
                break;

            default:
                // random choice entered
                printf("invalid choice!! try again\n");
        }
    } 
    while(choice != 5);
    return 0;
}