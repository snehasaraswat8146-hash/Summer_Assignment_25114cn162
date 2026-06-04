// Write a program to check whether a number is prime.
#include <stdio.h>
int main( )
{
int n,i,Flag=0;
printf(" enter the number you want to check:");
scanf("%d",&n);
if(n<=1){
printf(" number is not prime");
return 0;
}

for(i=2;i<=n-1;i++){
if(n%i==0){
Flag=1;
break;
}
}
if(Flag==1){
printf ("the number is not prime%d",n);}
else{
printf ("the number is prime%d",n);
}
return 0;
}