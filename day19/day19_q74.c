//substract matrices
#include <stdio.h>
int main(){
    int r,c;
    printf("Enter Row of matrix A and Matrix B : ");
    scanf("%d",&r);
    printf("Enter Column of matrix A and Matrix B : ");
    scanf("%d",&c);
    int Mat_A[r][c],Mat_B[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element of Matrix A : ");
            scanf("%d",&Mat_A[i][j]);
        }
    }
    printf("\n\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element of Matrix B : ");
            scanf("%d",&Mat_B[i][j]);
        }
    }
    int Mat[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            Mat[i][j]=Mat_A[i][j]-Mat_B[i][j];
        }
    }
    printf("Matrix A and Matrix B substraction : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",Mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}