//Write a program to Find first non-repeating character.
#include <stdio.h>
int main()
{
    int i,j;
    char string[100];
    printf("enter string you want to find length of:");
    //fgets("%s",string);//string already array address ko represent krta h
    fgets(string,100,stdin);
    for(i=0;string[i] !='\n';i++){
        int count =0;
        for(j=0;string[j] !='\n';j++){
            if(string[i]==string[j]){
                count=count+1;
            }
        }
        if (count==1){
        printf("%c",string[i]);
        break;
      }
    }
return 0;
}