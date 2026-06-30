//Write a program to Create mini employee management system

#include <stdio.h>     // for printf and scanf
#include <string.h>    // for strcmp and strcpy

#define MAX 50         

char names[MAX][50];   // storing names
int ids[MAX];          // storing ids
float salary[MAX];     // storing salaries
int total = 0;         // how many employees added so far

void addEmployee() {
    printf("Enter name: ");
    scanf("%s", names[total]);    // save name at current position
    printf("Enter ID: ");
    scanf("%d", &ids[total]);     // save id
    printf("Enter salary: ");
    scanf("%f", &salary[total]);  // save salary
    total++;                      // one more employee added
    printf("Added!\n");
}

void showAll() {
    int i;
    for (i = 0; i < total; i++)   // go through each employee
        printf("%d. %s | ID: %d | Salary: %.2f\n", i+1, names[i], ids[i], salary[i]);
}

void searchByName() {
    char s[50];
    printf("Enter name: ");
    scanf("%s", s);               // take name to search
    int i;
    for (i = 0; i < total; i++) {
        if (strcmp(names[i], s) == 0) {   // compare with each stored name
            printf("Found - ID: %d | Salary: %.2f\n", ids[i], salary[i]);
            return;
        }
    }
    printf("Not found\n");
}

void deleteEmployee() {
    int delId, i, pos = -1;
    printf("Enter ID to delete: ");
    scanf("%d", &delId);
    for (i = 0; i < total; i++) {
        if (ids[i] == delId) { pos = i; break; }   // find which position to delete
    }
    if (pos == -1) { printf("Not found\n"); return; }
    for (i = pos; i < total - 1; i++) {   // shift everyone up to fill the gap
        strcpy(names[i], names[i+1]);
        ids[i] = ids[i+1];
        salary[i] = salary[i+1];
    }
    total--;    // one less employee now
    printf("Deleted\n");
}

// keeps calling itself to check next salary, returns the bigger one
float highestSalary(int i) {
    if (i == total - 1) return salary[i];          // last employee, just return their salary
    float rest = highestSalary(i + 1);             // get highest from rest of the list
    return salary[i] > rest ? salary[i] : rest;   // return whichever is bigger
}

int main() {
    int choice;
    while (1) {    // keep showing menu until user exits
        printf("\n1.Add  2.Show  3.Search  4.Delete  5.Highest Paid  6.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1) addEmployee();
        else if (choice == 2) showAll();
        else if (choice == 3) searchByName();
        else if (choice == 4) deleteEmployee();
        else if (choice == 5 && total > 0) printf("Highest salary: %.2f\n", highestSalary(0));
        else if (choice == 6) break;   // exit the loop
    }
    return 0;
}