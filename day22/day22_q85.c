//Write a program to check palindrome string----> two pointer method
#include <stdio.h>
int main()
{
    int length=0,i,flag=0;
    char string[100];
    printf("enter string you want to find length of:");
    //fgets("%s",string);//string already array address ko represent krta h
    fgets(string,100,stdin);
    for(i=0;string[i] !='\n';i++){
        
            length=length+1;
    }
    int start=0;
    int end=length-1;
    while(start<end){
        if(string[start] !=string[end]){
           flag=flag+1;
           break;
        }
        start++;
        end--;
    }
if(flag==0){
    printf("palindrome");
}
else{
    printf("not palindrome");
}
return 0;
}