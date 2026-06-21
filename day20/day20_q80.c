//column-wise sum of matrix
#include <stdio.h>
int main(){
    int r,c;
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
    printf("\n\n");
    for(int i=0;i<c;i++){
        int sum=0;
        for(int j=0;j<r;j++){
            sum+=Mat_A[j][i];
        }
        printf("Column %d Sum are : %d\n",i+1,sum);
    }
    return 0;
}