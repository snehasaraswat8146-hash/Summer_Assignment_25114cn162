//Write a program to find the second largest element
#include <stdio.h>
int main()
{
 int i,n,second_largest,largest,found=0;
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
if(n==1){
  printf("second largest element doesn't exist"); 
 return 0;
  }

largest=arr[0];
second_largest=arr[0];


 for(i=1;i<n;i++){
      if(arr[i]>largest){
        second_largest=largest;
        largest=arr[i];
        found=1;
        }
   
  else if (arr[i] < largest) {

            if (!found || arr[i] > second_largest) {
                second_largest = arr[i];
                found = 1;
            }
        }

   }

    if (found==1){
        printf("Second distinct largest element is: %d", second_largest);
}
    else{
        printf("Second distinct largest element doesn't exist");
}
 return 0;
}