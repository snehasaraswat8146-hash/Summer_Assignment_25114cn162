// Write a program to print character pyramid 
#include <stdio.h>
int main()
{
 int j,i,n;
 printf("enter the number");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
     for(j=1;j<=n-i;j++){
        printf(" ");
       }

    for(j=1;j<=i;j++){
        printf("%c",('A'+j-1));
       }
     for(j=i-1;j>=1;j--){
        printf("%c",('A'+j-1));
       }

        printf("\n");
}
return 0;
}