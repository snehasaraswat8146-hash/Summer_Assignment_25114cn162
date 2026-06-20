//Write a program to Union of arrays
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
    printf("Union of array 1 [");
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
    int arr[n1+n3];
    for(int i=0;i<n1;i++){
        arr[i]=arr1[i];
    }
    for(int i=0;i<n3;i++){
        arr[i+n1]=arr2[i];
    }
    int n=n1+n3;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }

        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        if(i!=n-1){
            printf(",");
        }
    }
    printf("]");
    return 0;
}