//matrix multiplication
#include <stdio.h>
int main(){
    int r,c,r_c;
    printf("Enter Row of matrix A : ");
    scanf("%d",&r);
    printf("Enter Column of matrix A and Row of Matrix B : ");
    scanf("%d",&r_c);
    printf("Enter Column of matrix B : ");
    scanf("%d",&c);
    int Mat_A[r][r_c],Mat_B[r_c][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<r_c;j++){
            printf("Enter element of Matrix A : ");
            scanf("%d",&Mat_A[i][j]);
        }
    }
    printf("\n\n");
    for(int i=0;i<r_c;i++){
        for(int j=0;j<c;j++){
            printf("Enter element of Matrix B : ");
            scanf("%d",&Mat_B[i][j]);
        }
    }
    int Mat[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int sum=0;
            for(int k=0;k<r_c;k++){
                sum+=Mat_A[i][k]*Mat_B[k][j];
            }
            Mat[i][j]=sum;
        }
    }
    printf("Matrix A and Matrix B Multiplication : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",Mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}