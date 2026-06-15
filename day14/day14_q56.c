// Write a program to find duplicates in array
#include <stdio.h>
int main()
{
 int i,n,j;
 printf("enter size of array");
 scanf("%d",&n);
 int arr[n];
 int ele;
 for(i=0;i<n;i++){
    printf("enter the element of array");
    scanf("%d",&ele);
    arr[i]=ele;
   }
 for(i=0;i<n;i++){
    printf(" %d \n",arr[i]);
       }
for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("duplicates are:%d\n", arr[i]);
                break;
            }
        }
    }


 return 0;
}