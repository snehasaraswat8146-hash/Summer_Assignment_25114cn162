//Write a program to find missing number in array
#include <stdio.h>
int main()
{
 int n,i,sum,actual_sum=0,range;
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
// FINDING MISSING NUMBER
printf("enter the original range of the array");
scanf("%d",&range);
sum=range*(range+1)/2;

printf("the expected sum is: %d \n",sum);
for(i=0;i<=n-1;i++){
actual_sum=actual_sum+arr[i];
}
printf("the actual sum is: %d \n",actual_sum);

int missing_number=sum-actual_sum;
printf("the missing number is: %d \n",missing_number);
return 0;
}
