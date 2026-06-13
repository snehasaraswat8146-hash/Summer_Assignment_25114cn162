//Write a program to input and display array
#include <stdio.h>
int main()
{
 int i,n;
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
    printf("%d \n",arr[i]);
       }


 return 0;
}