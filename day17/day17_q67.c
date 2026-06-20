//intersection of arrays
#include <stdio.h>
int main(){
    int n1,n2,n3,n4;
    printf("Enter the total elements ,You want to enter in a array 1: ");
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++){
        printf("Enter the element : ");
        scanf("%d",&n2);
        arr1[i]=n2;
    }
    printf("Enter the total elements ,You want to enter in a array 2: ");
    scanf("%d",&n3);
    int arr2[n3];
    for(int i=0;i<n3;i++){
        printf("Enter the element : ");
        scanf("%d",&n4);
        arr2[i]=n4;
    }
    int arr[(n1+n3)/2],k=0;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            if(arr1[i]==arr2[j]){
                arr[k]=arr1[i];
                k++;
                break;
            }
        }
    }
    printf("Intersection of array 1 [");
    for(int i=0;i<n1;i++){
        printf("%d",arr1[i]);
        if(i!=n1-1){
            printf(",");
        }
    }
    printf("] and array 2 [");
    for(int i=0;i<n3;i++){
        printf("%d",arr2[i]);
        if(i!=n3-1){
            printf(",");
        }
    }
    printf("] are : [");
    for(int i=0;i<k;i++){
        printf("%d",arr[i]);
        if(i!=k){
            printf(",");
        }
    }
    printf("]");
    return 0;
}