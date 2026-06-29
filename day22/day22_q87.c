//Write a program to find character frequency
#include <stdio.h>
int main()
{
    int i,j,k;
    char string[100];
    printf("enter string you want to find length of:");
    //fgets("%s",string);//string already array address ko represent krta h
    fgets(string,100,stdin);
    for(i=0;string[i] !='\n';i++){
        int count=0;
        int duplicate =0;
        for(k=0;k<=i-1;k++){
            if(string[k]==string[i]){
                duplicate=1;
                break;
            }
        }
        if(duplicate==0){
        for(j=0;string[j] !='\n';j++){
            if(string[i]==string[j]){
                count=count+1;
            }
        }
        printf("frequency of character in string is:  %d %c \n",count,string[i]);
    }
    
}
    return 0;
}