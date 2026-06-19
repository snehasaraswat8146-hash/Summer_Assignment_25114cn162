//Write a program to find maximum frequency element
//Write a program to find maximum frequency of an element
#include <stdio.h>
int main()
{
 int n,i,j;
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
//FINDING THE MAXIMUM FREQUENCY OF AN ELEMENT- matlab khud se elements ko scan krke batana ki kiski frequency sabse zyada h
int max_element=arr[0];
int max_frequency=0; 
for(i=0;i<n;i++){
   int frequency=0;
   for(j=0;j<n;j++){
       if(arr[i]==arr[j]){
           frequency=frequency+1;
           }
        }
        if(frequency>max_frequency){ 
            max_frequency=frequency;
            max_element=arr[i];
              }
        
   }
printf("maximum frequency element will be: %d",max_element);
printf("frequency:%d",max_frequency);
return 0;
}