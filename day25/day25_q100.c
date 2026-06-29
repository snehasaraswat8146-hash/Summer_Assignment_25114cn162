//Write a program to Sort words by length
#include <stdio.h>
#include <string.h>
int main() {
    char words[5][20];
    char temp[20]; 
    printf("Enter 5 words:\n");
    for (int i = 0; i < 5; i++) {
        printf("Word %d: ", i + 1);
        scanf("%s", words[i]);
    }
    //  Bubble Sort Logic 
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            // Compare the length of the current word with the next word
            if (strlen(words[j]) > strlen(words[j + 1])) {
                // Swap 
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
    printf("Words sorted by length (shortest to longest):");
    for (int i = 0; i < 5; i++) {
        printf("%s \n", words[i]);
    }
    return 0;
}