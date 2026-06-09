// Write a program to print a reverse star pattern
#include <stdio.h>
int main()
{
int i,j,n;
  printf("enter the number:");
  scanf("%d",&n);
 for(i=1;i<=n;i++){
    for(j=1;j<=(n-i+1);j++){
       printf("*");
     }
    printf("\n");
}
return 0;
}