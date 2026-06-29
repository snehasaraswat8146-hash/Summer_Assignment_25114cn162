//Write a program to Find string length without strlen().
#include <stdio.h>
int main()
{
    int length=0,i;
    char string[100];
    printf("enter string you want to find length of:");
    //fgets("%s",string);//string already array address ko represent krta h
    fgets(string,100,stdin);
    for(i=0;string[i] !='\n';i++){
        
            length=length+1;
    }
    printf("the length of the string is: %d",length);
    return 0;
}