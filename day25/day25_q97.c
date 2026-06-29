//merge 2 sorted array---> 2 pointer

#include <stdio.h>
#define MAX 100 
int main(void)
{
    int a[MAX];           // first sorted array  
    int b[MAX];           // second sorted array 
    int result[2 * MAX];  // basically aisi array bna rhe h jo big enough ho dono array ke liye
    int n = 0;            // number of elements in a 
    int m = 0;            // number of elements in b 
    int s;
    printf("Size of list A: ");
    if (scanf("%d", &n)!=1||n < 0|| n>MAX) {
        printf("Must be between 0 and %d.\n", MAX);
        return 0;
    }
    printf("sorted numbers for A: %d", n);
    for (s= 0;s< n;s++) {
        if (scanf("%d", &a[s])!=1) {
            printf("Invalid input.\n");
            return 0;
        }
    }
    printf("Size of list B: ");
    if (scanf("%d", &m) != 1||m<0||m>MAX) {
        printf(" Must be between 0 and %d.\n", MAX);
        return 0;
    }
    printf("Enter sorted numbers for B: %d", m);
    for (s= 0; s< m; s++) {
        if (scanf("%d", &b[s]) != 1) {
            printf("Invalid input.\n");
            return 0;
        }
    }

    // Two-pointer merge. Because both inputs are ALREADY sorted, we walk both
     //arrays together and always copy the smaller front value next. 
    int i = 0;  
    int j = 0;  
    int k = 0;  

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }
    while (i < n) {
        result[k++] = a[i++];
    }
    while (j < m) {
        result[k++] = b[j++];
    }
    printf("Merged sorted array:");
    for (s= 0;s< k; s++) {
        printf(" %d", result[s]);
    }
    printf("\n");

    return 0;
} 