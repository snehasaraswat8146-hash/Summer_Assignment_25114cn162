// Write a program to find sum and average of the array
#include <stdio.h>
int main()
{
 int i,n,sum=0,avg=0;
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
// for sum
for(i=0;i<n;i++){
sum=sum+arr[i];
}
printf("the sum is: %d ",sum);
// for average

avg=(sum)/n;

printf("the avg is: %d ",avg);


 return 0;
}