//Write a program to Create bank account system. 
#include <stdio.h>
#include <string.h>
int accNo[100];
char accName[100][30];
float balance[100];
int totalAcc = 0;   // how many accounts we have right now
 
// just a quick function to check if account exists, returns index or -1
int findAccount(int no)
{
    int i;
    for (i = 0; i < totalAcc; i++)
    {
        if (accNo[i] == no)
        {
            return i;
        }
    }
    return -1;
}
// main func
int main()
{
    int choice;
    while (1)
    {
        printf("\n=========== BANK ACCOUNT SYSTEM ===========\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Show All Accounts\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
 
        // creating new account
        if (choice == 1)
        {
            printf("\nEnter Account Number: ");
            scanf("%d", &accNo[totalAcc]);
 
            // check karte hai already exist toh nahi karta (just checking duplicate)
            if (findAccount(accNo[totalAcc]) != -1)
            {
                printf("Account already exists with this number!\n");
            }
            else
            {
                printf("Enter Name: ");
                scanf("%s", accName[totalAcc]);
 
                printf("Enter Initial Deposit Amount: ");
                scanf("%f", &balance[totalAcc]);
 
                if (balance[totalAcc] < 0)
                {
                    printf("Amount cannot be negative, setting balance to 0\n");
                    balance[totalAcc] = 0;
                }
 
                printf("Account Created Successfully!\n");
                totalAcc++;
            }
        }
 
        // deposit money
        else if (choice == 2)
        {
            int no;
            float amt;
            printf("\nEnter Account Number: ");
            scanf("%d", &no);
 
            int idx = findAccount(no);
 
            if (idx == -1)
            {
                printf("Account not found!\n");
            }
            else
            {
                printf("Enter amount to deposit: ");
                scanf("%f", &amt);
 
                if (amt <= 0)
                {
                    printf("Invalid amount!\n");
                }
                else
                {
                    balance[idx] = balance[idx] + amt;
                    printf("Amount Deposited Successfully!\n");
                    printf("New Balance: %.2f\n", balance[idx]);
                }
            }
        }
 
        // withdraw money
        else if (choice == 3)
        {
            int no;
            float amt;
            printf("\nEnter Account Number: ");
            scanf("%d", &no);
 
            int idx = findAccount(no);
 
            if (idx == -1)
            {
                printf("Account not found!\n");
            }
            else
            {
                printf("Enter amount to withdraw: ");
                scanf("%f", &amt);
 
                if (amt <= 0)
                {
                    printf("Invalid amount!\n");
                }
                else if (amt > balance[idx])
                {
                    printf("Insufficient balance! Your balance is %.2f\n", balance[idx]);
                }
                else
                {
                    balance[idx] = balance[idx] - amt;
                    printf("Amount Withdrawn Successfully!\n");
                    printf("New Balance: %.2f\n", balance[idx]);
                }
            }
        }
 
        // check balance
        else if (choice == 4)
        {
            int no;
            printf("\nEnter Account Number: ");
            scanf("%d", &no);
 
            int idx = findAccount(no);
 
            if (idx == -1)
            {
                printf("Account not found!\n");
            }
            else
            {
                printf("Account Holder: %s\n", accName[idx]);
                printf("Current Balance: %.2f\n", balance[idx]);
            }
        }
 
        // show all accounts
        else if (choice == 5)
        {
            if (totalAcc == 0)
            {
                printf("\nNo accounts created yet!\n");
            }
            else
            {
                printf("\n--- All Accounts ---\n");
                for (int i = 0; i < totalAcc; i++)
                {
                    printf("\nAccount No : %d", accNo[i]);
                    printf("\nName       : %s", accName[i]);
                    printf("\nBalance    : %.2f\n", balance[i]);
                }
            }
        }
 
        else if (choice == 6)
        {
            printf("\nThank you for using our bank system. Bye!\n");
            break;
        }
 
        else
        {
            printf("\nWrong choice, please try again\n");
        }
    }
    return 0;
}
 