//write a program to move zeros at end
#include <stdio.h>
int main()
{
 int n,i,j=0,s=0;
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
//moving 0 to end
for(i=0;i<n;i++){
    if(arr[i]!=0){
        s=arr[i];
       arr[i]=arr[j];
       arr[j]=s;
       j++;
  }
}
while(j<n){
arr[j]=0;
j++;
}
for(i=0;i<n;i++){
   printf("%d",arr[i]);
   }

return 0;
}