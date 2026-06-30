//Write a program to Create menu-driven string operations system.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int choice;
    while (1)   
    {
        printf("\n========= STRING OPERATIONS MENU =========\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Copy String\n");
        printf("4. Concatenate Two Strings\n");
        printf("5. Compare Two Strings\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
 
        // ---------------- LENGTH ----------------
        if (choice == 1)
        {
            printf("\nEnter a string: ");
            scanf("%s", str1);   // simple string no spaces, gets() use nahi kar rahe kyuki deprecated hai
 
            int len = strlen(str1);   // built in function se kaam ho jata hai
            printf("Length of string is: %d\n", len);
        }
 
        // ---------------- REVERSE ----------------
        else if (choice == 2)
        {
            printf("\nEnter a string: ");
            scanf("%s", str1);
 
            int len = strlen(str1);
            char rev[100];
 
            // last se start karke ek ek character peeche se aage daal rahe
            for (int i = 0; i < len; i++)
            {
                rev[i] = str1[len - 1 - i];
            }
            rev[len] = '\0';   // null character lagana zaroori hai warna garbage print hoga
 
            printf("Reversed string is: %s\n", rev);
        }
 
        // ---------------- COPY ----------------
        else if (choice == 3)
        {
            printf("\nEnter a string to copy: ");
            scanf("%s", str1);
 
            char copyStr[100];
            strcpy(copyStr, str1);   // direct strcpy use kar liya, easy hai
 
            printf("Copied string is: %s\n", copyStr);
        }
 
        // ---------------- CONCATENATE ----------------
        else if (choice == 4)
        {
            printf("\nEnter first string: ");
            scanf("%s", str1);
 
            printf("Enter second string: ");
            scanf("%s", str2);
 
            strcat(str1, str2);   // str1 ke peeche str2 jud jayega
            printf("Concatenated string is: %s\n", str1);
        }
 
        // ---------------- COMPARE ----------------
        else if (choice == 5)
        {
            printf("\nEnter first string: ");
            scanf("%s", str1);
 
            printf("Enter second string: ");
            scanf("%s", str2);
 
            int result = strcmp(str1, str2);
 
            // strcmp 0 deta hai agar same hai, negative agar str1 chota hai, positive agar bada hai
            if (result == 0)
            {
                printf("Both strings are equal.\n");
            }
            else if (result < 0)
            {
                printf("First string is smaller than second.\n");
            }
            else
            {
                printf("First string is greater than second.\n");
            }
        }
 
        // ---------------- UPPERCASE ----------------
        else if (choice == 6)
        {
            printf("\nEnter a string: ");
            scanf("%s", str1);
 
            int len = strlen(str1);
 
            // manually convert kar rahe, ascii trick use kiya
            for (int i = 0; i < len; i++)
            {
                if (str1[i] >= 'a' && str1[i] <= 'z')
                {
                    str1[i] = str1[i] - 32;   // chota se bada banane ke liye 32 minus karna padta hai
                }
            }
 
            printf("Uppercase string is: %s\n", str1);
        }
 
        // ---------------- LOWERCASE ----------------
        else if (choice == 7)
        {
            printf("\nEnter a string: ");
            scanf("%s", str1);
 
            int len = strlen(str1);
 
            for (int i = 0; i < len; i++)
            {
                if (str1[i] >= 'A' && str1[i] <= 'Z')
                {
                    str1[i] = str1[i] + 32;   // ulta logic, bada se chota
                }
            }
 
            printf("Lowercase string is: %s\n", str1);
        }
//---------------- exit-------------------------------
        else if (choice == 8)
        {
            printf("\nExiting program, bye bye!\n");
            break;
        }
 
        else
        {
            printf("\nInvalid choice, try again!\n");   
        }
    }
 
    return 0;
}
 