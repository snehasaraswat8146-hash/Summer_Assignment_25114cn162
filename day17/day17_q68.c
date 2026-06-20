//to find common elements
#include <stdio.h>
int main()
{
    int n1,n2,n3,n4,i,j;
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
    //common elements
     for(i = 0; i<n1; i++){
        for(j = 0; j<n3; j++){
            if(arr1[i] == arr2[j]){
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    return 0;
}
