//Write a program to rotate array left
//left rotation 1 - 1 element ko left position ki taraf move krta h

//*taking the array from user
#include <stdio.h>
int main()
{
 int n,i,k=0;
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
//*rotating the array:
printf("enter the first k elements of the array you want to rotate");
scanf("%d",&k);
if(k>n){
      k=k%n;
      }
if(k==0){
  for(i=0;i<n;i++){
   printf("%d",arr[i]);
   }
return 0;

}
int temp[k];

for(i=0;i<k;i++){
    temp[i]=arr[i];//storing our elements in temporary variable
    }
for(i=0;i<n-k;i++){
   arr[i]=arr[i+k];//elements ko shift krna
   }
for(i=n-k;i<=n-1;i++){
  arr[i]=temp[i-(n-k)];// ab jo empty space bachi shift krne ke baad use fill krna h
   }
for(i=0;i<n;i++){
   printf("%d",arr[i]);
   }
return 0;
}

