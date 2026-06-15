//Write a program to find the frequency of an element
//Array mein koi particular element kitni baar aaya hai

#include <stdio.h>
int main()
{
 int i,n,count=0,search_frequency;
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
printf("enter the element you want to find out the frequency of:");
 scanf("%d",&search_frequency);
for(i=0;i<n;i++){
   if(search_frequency==arr[i]){
     count=count+1;
          }
    }
printf("the frequency of the element is: %d",count);

 return 0;
}