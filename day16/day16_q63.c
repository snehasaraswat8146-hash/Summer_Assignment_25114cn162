//Write a program to find a pair with given sum
#include <stdio.h>
int main()
{
 int n,i,j,sum=0,target_sum;
 printf("enter the no of elements in array");
 scanf("%d",&n);
 int arr[n];
 int ele;
 for(i=0;i<n;i++){
     printf("enter the elements of the array");
     scanf("%d",&ele);
     arr[i]=ele;
   }
for(i=0;i<n;i++){
   printf("%d",arr[i]);
   }
// FINDING PAIR WITH GIVEN SUM
printf("enter the sum you want to find");
scanf("%d",&target_sum);
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
     sum=arr[i]+arr[j];
   if(sum==target_sum){
      printf("%d %d",arr[i],arr[j]);
      }
   }
}
return 0;
}
