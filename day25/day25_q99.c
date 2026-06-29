//Write a program to Sort names alphabetically
#include <stdio.h>
#include <string.h>
int main() {
    char names[5][20];
    char temp[20]; 
    printf("Enter 5 names:\n");
    for (int i=0;i<5;i++) {
        printf("Name %d: ",i + 1);
        scanf("%s",names[i]); 
    }

    //  Bubble Sort Logic
    for (int i = 0; i <5 - 1; i++) {// 5-1 isiliye bcz mai compare kr rhi hu and comparision pairs ka hi hota h
        // The inner loop compares adjacent names
        for (int j=0;j<5-1-i;j++){
            // strcmp compares two strings alphabetically. 
            // If it returns a value greater than 0, it means names[j] comes AFTER names[j+1]
            if (strcmp(names[j], names[j + 1]) > 0) {
                // Swaping
                strcpy(temp,names[j]);
                strcpy(names[j],names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    printf("Names in alphabetical order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s",names[i]);
    }
    return 0;
}