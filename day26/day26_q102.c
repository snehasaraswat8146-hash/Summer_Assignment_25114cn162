//Write a program to create a voting eligibility system
#include <stdio.h>
int main()
{
  int age,choice=1;
  while(choice==1){
     printf("enter the age of the player!");
     scanf("%d",&age);
    if(age<18){
        printf("wait a few more years pal!(>_<)");
    }
    else
    {
        printf("can vote!");
    }
    printf("Play again? (1/0): ");
    scanf("%d", &choice);
}
  return 0;
}