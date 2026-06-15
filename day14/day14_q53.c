//Write a program to linear search
//Linear Search ek simple searching technique hai jisme hum array ke elements ko ek-ek karke start se end tak check karte hain jab tak required element mil na jaye.

 
#include <stdio.h>
int main()
{
 int i,n,search,flag=0;
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
printf("enter the element you want to search:");
 scanf("%d",&search);
for(i=0;i<n;i++){
if(search==arr[i]){
   flag=1;
   break;
   }
}
if(flag==1){
printf("element found at index %d",i);

  }
else{
  printf("no element found ");

}

 return 0;
}