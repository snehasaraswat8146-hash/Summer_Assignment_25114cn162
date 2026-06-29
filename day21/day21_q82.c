//Write a program to reverse a string
#include <stdio.h>
int main()
{
    int i,length=0;
    char temp=0;
    char string[100];
    printf("enter string you want :");
    //scanf("%s",string);   string already array address ko represent krta h
    fgets(string,100,stdin);
    for(i=0;string[i] !='\n';i++){
        
            length=length+1;
    }
    int start=0;
    int end=length-1;
    while(start<end){
            temp=string[start];
            string[start]=string[end];//yeh characters ko bhi swap krega
            string[end]=temp;
            start++;
            end--;
    }
    printf("reversed string: %s",string);
    return 0;
}