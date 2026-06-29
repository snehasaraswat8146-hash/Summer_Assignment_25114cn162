//Write a program to convert lowercase into uppercase
//'a' = 97 'A' = 65 Difference = 32
#include <stdio.h>
int main()
{
    int i;
    char string[100];
    printf("enter string you want to find length of:");
    //fgets("%s",string);//string already array address ko represent krta h
    fgets(string,100,stdin);
    for(i=0;string[i] !='\n';i++){
        if(string[i]>='a' && string[i]<='z'){
           string[i]=string[i]-32;
        }
    }
    printf("%s",string);//%c gives a character
    return 0;
}