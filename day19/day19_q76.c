//diagonal sum of matrix
#include <stdio.h>
int main(){
    int r,c,sum=0;
    printf("Enter Row of matrix : ");
    scanf("%d",&r);
    printf("Enter Column of matrix : ");
    scanf("%d",&c);
    int Mat_A[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element of Matrix : ");
            scanf("%d",&Mat_A[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                sum+=Mat_A[i][j];
            }
        }
    }
    printf("Sum of Matrix Diagonal : %d",sum);
    return 0;
}