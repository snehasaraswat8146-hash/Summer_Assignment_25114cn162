//Write a program to Create ATM simulation
#include <stdio.h>
int main()
{
    // creating the account
    struct account
    {
        char name[60];
        int acc_no;
        int pin;
        float balance;
    };
    struct account user;   
    printf("Enter name: ");
    scanf("%s", user.name);

    printf("Enter account number: ");
    scanf("%d", &user.acc_no);

    printf("Enter PIN: ");
    scanf("%d", &user.pin);

    printf("Enter balance: ");
    scanf("%f", &user.balance);

    // LOGIN INTO THE ACCOUNT
    int enteredpin;

    printf("Enter your pin: ");
    scanf("%d", &enteredpin);   

    if (user.pin!=enteredpin) 
    {
        printf("Invalid PIN\n");
        return 0;               
    }

    // menu
    int choice, amount;

    do
    {
        printf("\nMENU!!\n");
        printf("1. CHECK BALANCE\n");
        printf("2. DEPOSIT MONEY\n");
        printf("3. WITHDRAW MONEY\n");
        printf("4. ACCOUNT DETAILS\n");
        printf("5. EXIT\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Current Balance: %.2f\n", user.balance);//%.2f 2 decimal places tk jata h
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);

            user.balance = user.balance + amount;
            printf("Updated Balance: %.2f\n", user.balance);
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);

            if (amount <= user.balance)   
            {
                user.balance = user.balance - amount;
                printf("Updated Balance: %.2f\n", user.balance);
            }
            else
            {
                printf("Insufficient Balance\n");
            }
            break;

        case 4:
            printf("Name: %s\n", user.name);       
            printf("Account Number: %d\n", user.acc_no); 
            printf("Balance: %.2f\n", user.balance);     
            break;

        case 5:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice\n");
        }

    } while (choice != 5);

    return 0;
}