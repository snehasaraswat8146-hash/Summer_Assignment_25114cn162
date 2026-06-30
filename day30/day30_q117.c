//Write a program to Create student record
//system using arrays and strings.
#include <stdio.h>
#include <string.h>
 
#define MAX_STUDENTS 100
 
int rollNo[MAX_STUDENTS];
char studentName[MAX_STUDENTS][30];
char studentAddress[MAX_STUDENTS][50];
int studentAge[MAX_STUDENTS];
float studentMarks[MAX_STUDENTS];
int totalStudents = 0;   // kitne students abhi record me hai
 
// roll number se student dhundne ka function, index return karega ya -1
int findStudent(int roll)
{
    for (int i = 0; i < totalStudents; i++)
    {
        if (rollNo[i] == roll)
        {
            return i;
        }
    }
    return -1;
}
 
int main()
{
    int choice;
 
    while (1)   
    {
        printf("\n=========== STUDENT RECORD SYSTEM ===========\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Sort Students by Marks\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
 
        // ---------------- ADD STUDENT ----------------
        if (choice == 1)
        {
            if (totalStudents >= MAX_STUDENTS)
            {
                printf("\nRecord full, cant add more students!\n");
            }
            else
            {
                int roll;
                printf("\nEnter Roll No: ");
                scanf("%d", &roll);
 
                // duplicate roll no check
                if (findStudent(roll) != -1)
                {
                    printf("Student with this roll no already exists!\n");
                }
                else
                {
                    rollNo[totalStudents] = roll;
 
                    printf("Enter Name: ");
                    scanf("%s", studentName[totalStudents]);   // single word name, no space allowed
 
                    printf("Enter Address: ");
                    scanf("%s", studentAddress[totalStudents]);   // yeh bhi single word, space wale baad me dekhenge
 
                    printf("Enter Age: ");
                    scanf("%d", &studentAge[totalStudents]);
 
                    printf("Enter Marks: ");
                    scanf("%f", &studentMarks[totalStudents]);
 
                    totalStudents++;
                    printf("Student Added Successfully!\n");
                }
            }
        }
 
        // ---------------- VIEW ALL ----------------
        else if (choice == 2)
        {
            if (totalStudents == 0)
            {
                printf("\nNo records found!\n");
            }
            else
            {
                printf("\n--- All Student Records ---\n");
                for (int i = 0; i < totalStudents; i++)
                {
                    printf("\nRoll No : %d", rollNo[i]);
                    printf("\nName    : %s", studentName[i]);
                    printf("\nAddress : %s", studentAddress[i]);
                    printf("\nAge     : %d", studentAge[i]);
                    printf("\nMarks   : %.2f\n", studentMarks[i]);
                }
            }
        }
 
        // ---------------- SEARCH ----------------
        else if (choice == 3)
        {
            int roll;
            printf("\nEnter Roll No to search: ");
            scanf("%d", &roll);
 
            int idx = findStudent(roll);
 
            if (idx == -1)
            {
                printf("Student not found!\n");
            }
            else
            {
                printf("\nRoll No : %d", rollNo[idx]);
                printf("\nName    : %s", studentName[idx]);
                printf("\nAddress : %s", studentAddress[idx]);
                printf("\nAge     : %d", studentAge[idx]);
                printf("\nMarks   : %.2f\n", studentMarks[idx]);
            }
        }
 
        // ---------------- UPDATE ----------------
        else if (choice == 4)
        {
            int roll;
            printf("\nEnter Roll No to update: ");
            scanf("%d", &roll);
 
            int idx = findStudent(roll);
 
            if (idx == -1)
            {
                printf("Student not found!\n");
            }
            else
            {
                // saare fields dobara le rahe hai in order to update
                printf("Enter New Name: ");
                scanf("%s", studentName[idx]);
 
                printf("Enter New Address: ");
                scanf("%s", studentAddress[idx]);
 
                printf("Enter New Age: ");
                scanf("%d", &studentAge[idx]);
 
                printf("Enter New Marks: ");
                scanf("%f", &studentMarks[idx]);
 
                printf("Student Updated Successfully!\n");
            }
        }
 
        // ---------------- DELETE ----------------
        else if (choice == 5)
        {
            int roll;
            printf("\nEnter Roll No to delete: ");
            scanf("%d", &roll);
 
            int idx = findStudent(roll);
 
            if (idx == -1)
            {
                printf("Student not found!\n");
            }
            else
            {
                // age wale sab records ek position peeche khisak rahe hai
                for (int i = idx; i < totalStudents - 1; i++)
                {
                    rollNo[i] = rollNo[i + 1];
                    strcpy(studentName[i], studentName[i + 1]);
                    strcpy(studentAddress[i], studentAddress[i + 1]);
                    studentAge[i] = studentAge[i + 1];
                    studentMarks[i] = studentMarks[i + 1];
                }
 
                totalStudents--;
                printf("Student Deleted Successfully!\n");
            }
        }
 
        // ---------------- SORT BY MARKS ----------------
        else if (choice == 6)
        {
            if (totalStudents == 0)
            {
                printf("\nNo records to sort!\n");
            }
            else
            {
                // basic bubble sort, sabse simple sorting jo pata hai abhi tak
                // descending order me sort kar rahe, highest marks pehle
                for (int i = 0; i < totalStudents - 1; i++)
                {
                    for (int j = 0; j < totalStudents - i - 1; j++)
                    {
                        if (studentMarks[j] < studentMarks[j + 1])
                        {
                            // swap marks
                            float tempMarks = studentMarks[j];
                            studentMarks[j] = studentMarks[j + 1];
                            studentMarks[j + 1] = tempMarks;
 
                            // swap roll no bhi taaki sahi student ke sahi marks rahe
                            int tempRoll = rollNo[j];
                            rollNo[j] = rollNo[j + 1];
                            rollNo[j + 1] = tempRoll;
 
                            // swap name
                            char tempName[30];
                            strcpy(tempName, studentName[j]);
                            strcpy(studentName[j], studentName[j + 1]);
                            strcpy(studentName[j + 1], tempName);
 
                            // swap address
                            char tempAddr[50];
                            strcpy(tempAddr, studentAddress[j]);
                            strcpy(studentAddress[j], studentAddress[j + 1]);
                            strcpy(studentAddress[j + 1], tempAddr);
 
                            // swap age
                            int tempAge = studentAge[j];
                            studentAge[j] = studentAge[j + 1];
                            studentAge[j + 1] = tempAge;
                        }
                    }
                }
                printf("\nStudents Sorted by Marks (High to Low):\n");
                for (int i = 0; i < totalStudents; i++)
                {
                    printf("\nName: %s, Roll No: %d, Marks: %.2f", studentName[i], rollNo[i], studentMarks[i]);
                }
                printf("\n");
            }
        }
        else if (choice == 7)
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
 