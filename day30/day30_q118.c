//Write a program to Create mini library system
#include <stdio.h>
#include <string.h>
 
#define MAX_BOOKS 20
 
int bookId[MAX_BOOKS];
char bookName[MAX_BOOKS][30];
int isIssued[MAX_BOOKS];   // 0 = available, 1 = issued
int totalBooks = 0;
 
int main()
{
    int choice;
 
    while (1)
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Show All Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
 
        // ---------------- ADD BOOK ----------------
        if (choice == 1)
        {
            if (totalBooks >= MAX_BOOKS)
            {
                printf("\nLibrary full, cant add more books!\n");
            }
            else
            {
                printf("\nEnter Book ID: ");
                scanf("%d", &bookId[totalBooks]);
 
                printf("Enter Book Name: ");
                scanf("%s", bookName[totalBooks]);   // single word naam, space wala baad me
 
                isIssued[totalBooks] = 0;   // naya book hai toh available hi hoga
 
                totalBooks++;
                printf("Book Added Successfully!\n");
            }
        }
 
        // ---------------- SHOW ALL ----------------
        else if (choice == 2)
        {
            if (totalBooks == 0)
            {
                printf("\nNo books in library!\n");
            }
            else
            {
                printf("\n--- Book List ---\n");
                for (int i = 0; i < totalBooks; i++)
                {
                    printf("\nID: %d, Name: %s, Status: ", bookId[i], bookName[i]);
 
                    if (isIssued[i] == 1)
                    {
                        printf("Issued");
                    }
                    else
                    {
                        printf("Available");
                    }
                }
                printf("\n");
            }
        }
 
        // ---------------- ISSUE BOOK ----------------
        else if (choice == 3)
        {
            int id, found = 0;
            printf("\nEnter Book ID to issue: ");
            scanf("%d", &id);
            for (int i = 0; i < totalBooks; i++)
            {
                if (bookId[i] == id)
                {
                    found = 1;
 
                    if (isIssued[i] == 1)
                    {
                        printf("Sorry, book already issued!\n");
                    }
                    else
                    {
                        isIssued[i] = 1;
                        printf("Book Issued Successfully!\n");
                    }
                    break;
                }
            }
 
            if (found == 0)
            {
                printf("Book not found!\n");
            }
        }
 
        // ---------------- RETURN BOOK ----------------
        else if (choice == 4)
        {
            int id, found = 0;
            printf("\nEnter Book ID to return: ");
            scanf("%d", &id);
 
            for (int i = 0; i < totalBooks; i++)
            {
                if (bookId[i] == id)
                {
                    found = 1;
 
                    if (isIssued[i] == 0)
                    {
                        printf("This book was not issued!\n");
                    }
                    else
                    {
                        isIssued[i] = 0;
                        printf("Book Returned Successfully!\n");
                    }
                    break;
                }
            }
 
            if (found == 0)
            {
                printf("Book not found!\n");
            }
        }
 
        else if (choice == 5)
        {
            printf("\nExiting... Bye!\n");
            break;
        }
 
        else
        {
            printf("\nInvalid choice, try again!\n");
        }
    }
 
    return 0;
}