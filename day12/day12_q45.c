// Write a program to write function for palindrome.
#include <stdio.h>
void palindrome(int n)
{
  int temp,digit,rev=0;
  temp=n;
  while(n!=0){
     digit=n%10;
     rev=rev*10+digit;
     n=n/10;
    }
  if(temp==rev){
     printf("palindrome");
      }
  else{
     printf("not palindrome");
     }
return;
}
int main()
{
  int n;
  printf("enter the number you want to check:");
  scanf("%d",&n);
  palindrome(n);
  
  return 0;
  }
