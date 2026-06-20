//Write a program to merge arrays
#include<stdio.h>
int main(){
int n1,n2,i;
 printf("enter the no of elements in array1 and   array2");
 scanf("%d %d",&n1,&n2);
int arr1[n1];
int arr2[n2];
int arr[n1+n2];
for(i=0;i<n1;i++){
     printf("enter the elements of the array1");
     scanf("%d",&arr1[i]);
       }
for(i=0;i<n1;i++){
   printf("%d",arr1[i]);
   }
for(i=0;i<n2;i++){
     printf("enter the elements of the array2");
     scanf("%d",&arr2[i]);
       }
for(i=0;i<n2;i++){
   printf("%d",arr2[i]);
   }
//merging arrays- ab merge krne ke liye hum dono arrays ko copy karenge new array mei
for(i=0;i<n1;i++){
   arr[i]=arr1[i];
 }
for(i=0;i<n2;i++){
   arr[n1+i]=arr2[i];
 }
for(i=0;i<n2;i++){
   printf("%d",arr[i]);
   }
return 0;
}
