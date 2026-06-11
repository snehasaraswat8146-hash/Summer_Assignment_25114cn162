// Write a program to write a function to find the maximum number between the two numbers
#include <stdio.h>
int max(int a, int b)
{
  if (a>b){
      printf("a is greater ");
      return (a);
     }
  else if (b>a){
      printf("b is greater" );
      return (b);
     }
  else {
      printf("both are equal");
      return (a);
     }
  
}
int main()
{
  int a,b;
  printf("the first number is : ");
  scanf("%d",&a);
  printf("the second number is :");
  scanf("%d",&b);
 int maximum=max(a,b);
 printf("%d",maximum);
  
return 0;
}
