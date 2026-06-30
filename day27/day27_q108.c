//Write a program to Create marksheet generation system.
#include <stdio.h>
#include <string.h>
int main()
{
    int roll[50];
    char name[50][30];
    int marks1[50], marks2[50], marks3[50];
    int total[50];
    float percentage[50];
    int n = 0;   // total students added
    int choice;
 
    while (1)
    {
        printf("\n----- MARKSHEET GENERATION SYSTEM -----\n");
        printf("1. Add Student\n");
        printf("2. Show All Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
 
        if (choice == 1)
        {
            printf("\nEnter Roll No: ");
            scanf("%d", &roll[n]);
 
            printf("Enter Name: ");
            scanf("%s", name[n]);   // simple name without spaces
 
            printf("Enter Marks in Subject 1: ");
            scanf("%d", &marks1[n]);
 
            printf("Enter Marks in Subject 2: ");
            scanf("%d", &marks2[n]);
 
            printf("Enter Marks in Subject 3: ");
            scanf("%d", &marks3[n]);
 
            total[n] = marks1[n] + marks2[n] + marks3[n];
            percentage[n] = (total[n] / 300.0) * 100;
 
            printf("Student Added Successfully!\n");
            n++;
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                printf("\nNo records found!\n");
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    printf("\nRoll No   : %d", roll[i]);
                    printf("\nName      : %s", name[i]);
                    printf("\nSubject 1 : %d", marks1[i]);
                    printf("\nSubject 2 : %d", marks2[i]);
                    printf("\nSubject 3 : %d", marks3[i]);
                    printf("\nTotal     : %d", total[i]);
                    printf("\nPercentage: %.2f", percentage[i]);
 
                    if (percentage[i] >= 90)
                        printf("\nGrade     : A+");
                    else if (percentage[i] >= 75)
                        printf("\nGrade     : A");
                    else if (percentage[i] >= 60)
                        printf("\nGrade     : B");
                    else if (percentage[i] >= 40)
                        printf("\nGrade     : C");
                    else
                        printf("\nGrade     : Fail");
 
                    printf("\n");
                }
            }
        }
        else if (choice == 3)
        {
            int searchRoll;
            int found = 0;
            printf("\nEnter Roll No to search: ");
            scanf("%d", &searchRoll);
            for (int i = 0; i < n; i++)
            {
                if (roll[i] == searchRoll)
                {
                    printf("\nRoll No   : %d", roll[i]);
                    printf("\nName      : %s", name[i]);
                    printf("\nSubject 1 : %d", marks1[i]);
                    printf("\nSubject 2 : %d", marks2[i]);
                    printf("\nSubject 3 : %d", marks3[i]);
                    printf("\nTotal     : %d", total[i]);
                    printf("\nPercentage: %.2f\n", percentage[i]);
                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                printf("\nStudent not found!\n");
            }
        }
        else if (choice == 4)
        {
            printf("Exiting program. Goodbye!\n");
            break;
        }
        else
        {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}