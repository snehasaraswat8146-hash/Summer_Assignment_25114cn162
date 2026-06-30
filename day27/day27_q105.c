//Write a program to Create student record management system.
#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct Student s[100];
    int count = 0;
    int choice, roll, found;
    float newMarks;

    do
    {
        printf("\n STUDENT RECORD MANAGEMENT SYSTEM \n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Update Marks\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Roll Number: ");
            scanf("%d", &s[count].roll);

            printf("Enter Name: ");
            scanf("%s", s[count].name);

            printf("Enter Marks: ");
            scanf("%f", &s[count].marks);

            count++;
            printf("Student record added successfully!\n");
            break;

        case 2:
            if (count == 0)
            {
                printf("No records found!\n");
            }
            else
            {
                printf("\n--- Student Records ---\n");

                for (int i = 0; i < count; i++)
                {
                    printf("\nStudent %d\n", i + 1);
                    printf("Roll Number: %d\n", s[i].roll);
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                }
            }
            break;

        case 3:
            printf("Enter Roll Number to Search: ");
            scanf("%d", &roll);

            found = 0;

            for (int i = 0; i < count; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("\nStudent Found!\n");
                    printf("Roll Number: %d\n", s[i].roll);
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);

                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Student not found!\n");
            }
            break;
        case 4:
            printf("Enter Roll Number: ");
            scanf("%d", &roll);
            found = 0;
            for (int i = 0; i < count; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("Current Marks: %.2f\n", s[i].marks);

                    printf("Enter New Marks: ");
                    scanf("%f", &newMarks);
                    s[i].marks = newMarks;
                    printf("Marks updated successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Student not found!\n");
            }
            break;
        case 5:
            printf("Exiting Program...\n");
            break;
        default:
            printf("Invalid Choice!\n");
        }
    } while (choice != 5);
    return 0;
}