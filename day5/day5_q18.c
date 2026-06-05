// Write a program to check for strong number

//number ke har digit ke factorial ka sum agar usi number ke equal ho
#include <stdio.h>
int main()
{
 int n,i,temp,digit,sum=0;
 printf("enter the number:");
 scanf("%d",&n);
 if(n<=0){
  printf("the number is not a strong number");  
  return 0;
}
 temp=n;
 while(n>0){
    digit=n%10;
     int fact=1;
    for(i=1;i<=digit;i++){
        fact=fact*i;
}
    sum=sum+fact;
    n=n/10;
    }
 if(sum==temp){
   printf("the number is strong number :%d",temp);
        }
  else{
    printf("the number is not strong number :%d",temp);
        }
return 0;
}
