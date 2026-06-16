//Write a program to reverse array
#include <stdio.h>
int main()
{
 int n,i,start_pointer,end_pointer,temp=0;
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
   printf("%d ",arr[i]);
   }
//REVERSING ARRAY
//Two Pointer Method:: array/string ke andar 2 indices (pointers) use karte hain 
//aur unhe kisi rule ke according move karte hai
//Isse kai problems me nested loops avoid ho jate hai aur time complexity improve ho jati hai
start_pointer=0;// pointer basically position- index 
end_pointer=n-1;
while(start_pointer<end_pointer){
   temp=arr[start_pointer];
   arr[start_pointer]=arr[end_pointer];
   arr[end_pointer]=temp;
   start_pointer++;
   end_pointer--;
   }
for(i=0;i<n;i++){
   printf("%d ",arr[i]);
   }

 return 0;
}
