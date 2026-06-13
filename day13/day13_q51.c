//Write a program to find the largest and smallest element
#include <stdio.h>
int main()
{
 int i,n,largest=0,smallest=0;
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
// largesttt
 largest=arr[0];
 for(i=1;i<n;i++){
      if(arr[i]>largest){
        largest=arr[i];
        }
   }
printf("the largest element is: %d",largest);
// smallesttt
smallest=arr[0];
 for(i=1;i<n;i++){
      if(arr[i]<smallest){
        smallest=arr[i];
        }
   }
printf("the smallest element is: %d",smallest);


 return 0;
}