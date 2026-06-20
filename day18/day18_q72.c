//sort array in descending order
#include <stdio.h>
int main()
 {
   int i,j,n,temp;
   printf("enter number of elements");
   scanf("%d",&n);
   int a[n];
   printf("enter array:");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++){
    int max=i;
    for(j=i+1;j<n;j++){
        if(a[j] > a[max]){
            max=j;
        }
    }
    temp=a[i];
    a[i]=a[max];
    a[max]=temp;
}  
   printf("sorted array");
   for(i=0;i<n;i++){
    printf("%d",a[i]);
   }
 return 0;
 }