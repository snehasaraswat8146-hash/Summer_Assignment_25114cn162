//Write a program to Create salary management system.
#include <stdio.h>
// A simple structure to hold salary data
struct Salary {
    char name[30];
    int amount;
};
int main() {
    struct Salary list[20]; // Can hold up to 20 people
    int total = 0;
    int choice;

    while (1) {
        printf("\n1. Add Salary\n");
        printf("2. Show All\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (total < 20) {
                printf("Enter Name (no spaces): ");
                scanf("%s", list[total].name);

                printf("Enter Salary Amount: ");
                scanf("%d", &list[total].amount);

                total++; // Move to the next slot
                printf("Saved!\n");
            } else {
                printf("List is full!\n");
            }
        } 
        else if (choice == 2) {
            if (total == 0) {
                printf("No records found.\n");
            } else {
                printf("\n--- SALARY LIST ---\n");
                for (int i = 0; i < total; i++) {
                    printf("Name: %s - Salary: $%d\n", list[i].name, list[i].amount);
                }
            }
        } 
        else if (choice == 3) {
            printf("Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}