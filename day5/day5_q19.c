//write a program to print factors of a number
//factor pair mei bhi ho skte h so , unko check krne ke liye hum  loop ka use kr skte h 
#include <stdio.h>
int main()
{
 int n,i;
 printf("enter the number:");
 scanf("%d",&n);
 if(n <= 0)
{
    printf("Enter a positive number");
    return 0;
}
 for(i=1;i*i<=n;i++){
     if(n%i==0){
        printf("%d ",i);
         if(i!=n/i){
        printf("%d ",n/i);
         }
        
     }
}
return 0;
}
