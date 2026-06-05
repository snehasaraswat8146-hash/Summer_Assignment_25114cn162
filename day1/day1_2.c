// write a program to print multiplication table of a given number
#include<stdio.h>
int main()
{
  int i , n,j;
  printf("enter the number you want table of:");
  scanf("%d",&n);
  for(i=1;i<=10;i++){
      j=i*n;
      printf("%d * %d = %d \n",i,n,j);
      }
  printf("the table of the given number is:%d",j);
return 0;
}
