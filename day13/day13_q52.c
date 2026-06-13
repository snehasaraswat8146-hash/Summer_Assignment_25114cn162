//Write a program to count even and odd
#include <stdio.h>
int main()
{
 int i,n,count_even=0,count_odd=0;
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
// even ya odd elements check krne ke liye:
for(i=0;i<n;i++){
    if(arr[i]%2==0){
       count_even++;
    }
    else{
     count_odd++;
    }
       }
printf("the even and odd count are: %d %d",count_even,count_odd);


 return 0;
}