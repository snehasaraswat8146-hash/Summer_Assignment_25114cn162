//Write a program to Create menu-driven array operations system
#include <stdio.h>
#define SIZE 50   // max size of array, made it 50 just to be safe
int arr[SIZE];
int n = 0;   // n is current number of elements, not the size of array!! dont confuse
int main()
{
    int choice;
    while (1)   
    {
        printf("\n========= ARRAY OPERATIONS MENU =========\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Traverse / Display Array\n");
        printf("4. Update Element\n");
        printf("5. Search Element\n");
        printf("6. Check if Array is Empty\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
 
        // ---------------- INSERTION ----------------
        if (choice == 1)
        {
            if (n >= SIZE)
            {
                printf("\nArray is full, cant insert more!\n");   // overflow condition
            }
            else
            {
                int pos, value;
                printf("\nEnter position to insert (1 to %d): ", n + 1);
                scanf("%d", &pos);
 
                // pos should be valid, between 1 and n+1
                if (pos < 1 || pos > n + 1)
                {
                    printf("Invalid position!\n");
                }
                else
                {
                    printf("Enter value to insert: ");
                    scanf("%d", &value);
 
                    // shifting elements to the right side to make space
                    // start from last element and move backwards
                    for (int i = n; i >= pos; i--)
                    {
                        arr[i] = arr[i - 1];
                    }
 
                    arr[pos - 1] = value;   // -1 kyuki array 0 se start hota hai but user 1 se enter karta hai
                    n++;
 
                    printf("Element Inserted Successfully!\n");
                }
            }
        }
 
        // ---------------- DELETION ----------------
        else if (choice == 2)
        {
            // pehle check karo array khali toh nahi
            if (n == 0)
            {
                printf("\nArray is empty, nothing to delete!\n");
            }
            else
            {
                int pos;
                printf("\nEnter position to delete (1 to %d): ", n);
                scanf("%d", &pos);
 
                if (pos < 1 || pos > n)
                {
                    printf("Invalid position!\n");
                }
                else
                {
                    // shift everything left from pos onwards
                    for (int i = pos - 1; i < n - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }
 
                    n--;   // ek element kam ho gaya
                    printf("Element Deleted Successfully!\n");
                }
            }
        }
 
        // ---------------- TRAVERSAL ----------------
        else if (choice == 3)
        {
            // empty check yaha bhi lagana zaroori hai warna kuch nahi print hoga aur user confuse hoga
            if (n == 0)
            {
                printf("\nArray is empty, nothing to show!\n");
            }
            else
            {
                printf("\nArray Elements: ");
                for (int i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);   // simple loop, print sab kuch
                }
                printf("\n");
            }
        }
 
        // ---------------- UPDATE ----------------
        else if (choice == 4)
        {
            if (n == 0)
            {
                printf("\nArray is empty, nothing to update!\n");
            }
            else
            {
                int pos, value;
                printf("\nEnter position to update (1 to %d): ", n);
                scanf("%d", &pos);
 
                if (pos < 1 || pos > n)
                {
                    printf("Invalid position!\n");
                }
                else
                {
                    printf("Enter new value: ");
                    scanf("%d", &value);
 
                    arr[pos - 1] = value;   // direct replace, no shifting needed here
                    printf("Element Updated Successfully!\n");
                }
            }
        }
 
        // ---------------- SEARCH ----------------
        else if (choice == 5)
        {
            if (n == 0)
            {
                printf("\nArray is empty, nothing to search!\n");
            }
            else
            {
                int key, found = 0;
                printf("\nEnter value to search: ");
                scanf("%d", &key);
 
                // simple linear search
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] == key)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;   // no need to check further once found
                    }
                }
 
                if (found == 0)
                {
                    printf("Element not found in array!\n");
                }
            }
        }
 
        // ---------------- CHECK EMPTY ----------------
        else if (choice == 6)
        {
            // just checking n value, simple stuff
            if (n == 0)
            {
                printf("\nYes, array is empty.\n");
            }
            else
            {
                printf("\nNo, array is not empty. It has %d element(s).\n", n);
            }
        }
 
        else if (choice == 7)
        {
            printf("\nExiting program, bye bye!\n");
            break;
        }
 
        else
        {
            printf("\nInvalid choice, try again!\n");   // galat input ke liye
        }
    }
    return 0;
}
 