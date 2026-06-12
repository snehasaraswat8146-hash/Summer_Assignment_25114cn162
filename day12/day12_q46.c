// Write a program to write a function for armstrong
#include <stdio.h>
void armstrong(int n)
{ int i,sum=0,digit,temp,count=0,original;
  if(n<0){
    printf("Enter a positive number");
    return;
     }
   original=n;
 // counting the digits of the number:
      while(original!=0){
      count=count+1;
      original=original/10;
    }
   

   if(count==0){
    printf("the number is armstrong number");
    return;
}

//armstrong
  temp=n;
  while(temp!=0){
     digit=temp%10;
     int power=1;
     for(i=0;i<count;i++){
        power=power*digit;
         }
     sum=sum+power;
     temp=temp/10;
      }
   if(n==sum){
       printf("armstrong");
     }
   else{
       printf("not armstrong");
     }
  return;
}
int main()
{
  int n;
  printf("enter the number you want to check:");
  scanf("%d",&n);
  armstrong(n);
  
  return 0;
  }
  
