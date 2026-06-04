//Write a program to Find LCM of two numbers.
#include <stdio.h>
int main()
{
 int LCM,i, n1,n2;
 printf("enter the first number you want to find the LCM of:");
 scanf("%d",&n1);
 printf("enter the second number you want to find the LCM of:");
 scanf("%d",&n2);
 if(n1 > n2){
        i = n1;}
    else{
        i = n2;}
while(1){
    if(i%n1==0 && i%n2==0){
        LCM=i;
        break;}
    else{
        i++;      
        }

        }
 printf("the LCM is:%d",LCM);
 return 0;
}
