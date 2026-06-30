//Write a program to Create library management system.
#include <stdio.h>
#include <string.h>
int main()
{
    int bookId[100];
    char bookName[100][50];
    char author[100][30];
    int quantity[100];
    int issued[100];     // how many copies are currently issued
    int n = 0;            // total books added
 
    int choice;
    while (1)
    {
        printf(" LIBRARY MANAGEMENT SYSTEM \n");
        printf("1. Add Book\n");
        printf("2. Show All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\nEnter Book ID: ");
            scanf("%d", &bookId[n]);
            printf("Enter Book Name: ");
            scanf("%s", bookName[n]);   // simple name without spaces
            printf("Enter Author Name: ");
            scanf("%s", author[n]);
            printf("Enter Quantity: ");
            scanf("%d", &quantity[n]);
 // no copies issued yet
            issued[n] = 0;   
            printf("Book Added Successfully!\n");
            n++;
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                printf("\nNo books found!\n");
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    printf("\nBook ID      : %d", bookId[i]);
                    printf("\nBook Name    : %s", bookName[i]);
                    printf("\nAuthor       : %s", author[i]);
                    printf("\nQuantity     : %d", quantity[i]);
                    printf("\nIssued       : %d", issued[i]);
                    printf("\nAvailable    : %d", quantity[i] - issued[i]);
                    printf("\n");
                }
            }
        }
        else if (choice == 3)
        {
            int searchId;
            int found = 0;
            printf("\nEnter Book ID to search: ");
            scanf("%d", &searchId);
            for (int i = 0; i < n; i++)
            {
                if (bookId[i] == searchId)
                {
                    printf("\nBook ID      : %d", bookId[i]);
                    printf("\nBook Name    : %s", bookName[i]);
                    printf("\nAuthor       : %s", author[i]);
                    printf("\nQuantity     : %d", quantity[i]);
                    printf("\nIssued       : %d", issued[i]);
                    printf("\nAvailable    : %d\n", quantity[i] - issued[i]);
                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                printf("\nBook not found!\n");
            }
        }
        else if (choice == 4)
        {
            int issueId;
            int found = 0;
            printf("\nEnter Book ID to issue: ");
            scanf("%d", &issueId);
            for (int i = 0; i < n; i++)
            {
                if (bookId[i] == issueId)
                {
                    found = 1;
                    if (issued[i] < quantity[i])
                    {
                        issued[i]++;
                        printf("\nBook Issued Successfully!\n");
                    }
                    else
                    {
                        printf("\nNo copies available right now!\n");
                    }
                    break;
                }
            }
            if (found == 0)
            {
                printf("\nBook not found!\n");
            }
        }
        else if (choice == 5)
        {
            int returnId;
            int found = 0;
            printf("\nEnter Book ID to return: ");
            scanf("%d", &returnId);
            for (int i = 0; i < n; i++)
            {
                if (bookId[i] == returnId)
                {
                    found = 1;
 
                    if (issued[i] > 0)
                    {
                        issued[i]--;
                        printf("\nBook Returned Successfully!\n");
                    }
                    else
                    {
                        printf("\nNo copies of this book were issued!\n");
                    }
                    break;
                }
            }
            if (found == 0)
            {
                printf("\nBook not found!\n");
            }
        }
        else if (choice == 6)
        {
            printf("\nExiting program. Goodbye!\n");
            break;
        }
        else
        {
            printf("\nInvalid choice! Try again.\n");
        }
    }
    return 0;
}
 