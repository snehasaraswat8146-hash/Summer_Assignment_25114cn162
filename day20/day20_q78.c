//symmetric matrix
#include <stdio.h>
int main(){
    int r,c,count=0;
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
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(Mat_A[i][j]!=Mat_A[j][i]){
                count++;
            }
        }
    }
    if(count==0){
        printf("Symmetric Matrix");
    }
    else{
        printf("Not a Symmetric Matrix");
    }
    return 0;
}