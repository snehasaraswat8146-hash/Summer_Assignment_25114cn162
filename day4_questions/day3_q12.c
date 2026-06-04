// Write a program to print prime numbers in a range
#include <stdio.h>
int main( )
{
 int n,starting_range,ending_range,i,Flag=0;
 printf(" enter the staring range number you want to check:");
printf(" enter the ending range number you want to check:");
scanf("%d %d",&starting_range ,&ending_range);
for(n=starting_range;n<=ending_range;n++){
      Flag=0;
for(i=2;i<=n-1;i++){
      if(n%i==0){
Flag=1;
break;
}
}
if(Flag==0 && n>1){
printf("%d ",n);
}
}
return 0; 
}