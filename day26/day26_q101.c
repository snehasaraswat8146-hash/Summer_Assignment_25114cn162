//Write a program to Create number guessing game
#include <stdio.h>
int main()
{
  int secret,guess,choice=1;
  while(choice==1){
    printf("enter the mysterious guess!");
    scanf("%d",&secret);
   do
   {
    printf("enter the guess from player!");
    scanf("%d",&guess);
    if(guess<secret){
        printf("too loww (>_<)");
    }
    else if (guess>secret)
    {
        printf("too highhh (>_<)");
    }
    else{
        printf("bingo!!!");
    }
      
}
   while (guess!=secret);
    printf("Play again? (1/0): ");
    scanf("%d", &choice);
  }
    return 0;
}