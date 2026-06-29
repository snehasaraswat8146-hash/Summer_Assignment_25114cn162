//Write a program to Find common characters in strings.
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    char alreadyPrinted[100]; 
    int printedCount = 0;     
    // string 1
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
//string2
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    for (int i = 0; i < 100; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }
    for (int i = 0; i < 100; i++) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
    }
    printf("Common characters: ");
    //Compare characters
    for (int i= 0; i< strlen(str1); i++) {
        for (int j= 0;j<strlen(str2); j++) {    
            if (str1[i] == str2[j]) {// check agar humne char phele dekha h
                int alreadySeen = 0; 
                for (int k = 0; k < printedCount; k++) {
                    if (str1[i] == alreadyPrinted[k]) {
                        alreadySeen = 1; 
                        break;
                    }
                }
                if (alreadySeen == 0) {// agar char naya h
                    printf("%c ", str1[i]);
                    alreadyPrinted[printedCount] = str1[i]; 
                    printedCount++;
                }
                break; 
            }
        }
    }
    printf("\n");
    return 0;
}