//Write a program to Create employee management system.
#include <stdio.h>
#include <string.h>
// Defining the structure
struct Employee {
    int id;
    char name[30];
    float salary;
};
int main() {
    struct Employee emp[50]; // Array to hold up to 50 employees
    int count = 0;           // Keeps track of how many employees we have
    int choice;

    while(1) {
        // Simple Menu
        printf("\n--- EMPLOYEE SYSTEM ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < 50) {
                printf("\nEnter ID: ");
                scanf("%d", &emp[count].id);
                
                printf("Enter Name (No spaces): ");
                scanf("%s", emp[count].name); 
                
                printf("Enter Salary: ");
                scanf("%f", &emp[count].salary);
                
                count++; // Increment total count
                printf("Employee added!\n");
            } else {
                printf("Database full!\n");
            }
        } 
        else if (choice == 2) {
            if (count == 0) {
                printf("\nNo employees found.\n");
            } else {
                printf("\n--- Employee List ---\n");
                for(int i = 0; i < count; i++) {
                    printf("ID: %d | Name: %s | Salary: $%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
                }
            }
        } 
        else if (choice == 3) {
            printf("Exiting program.\n");
            break; // Breaks the while loop to close the program
        } 
        else {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}