//Transpose of matrix- [a b c
 //                     d e f] 

//It would change into 
//[a d 
// b e
// c f]
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
    int Mat[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            Mat[j][i]=Mat_A[i][j];
        }
    }
    printf("Transpose of Matrix : \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",Mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}