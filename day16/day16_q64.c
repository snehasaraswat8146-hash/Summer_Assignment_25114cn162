//Write a program to find duplicates
#include <stdio.h>
int main()
{
 int n,i,j,k;
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
// FINDING DUPLICATES

for(i=0;i<n;i++){    //fixes element
    for(j=i+1;j<n;j++){  //duplicate find
     if(arr[i]==arr[j]){
        for(k=j;k<n-1;k++){   // arranges the size and shifts the array
            arr[k]=arr[k + 1];
              }        
       n=n-1;
       j--; //shift krne ke baad jo index j pe aayegga use bhi check krna padega ki kahi vo duplicate to nhi?
        }
   }
}
for(i=0;i<n;i++){
   printf("%d",arr[i]);
   }
return 0;
}

