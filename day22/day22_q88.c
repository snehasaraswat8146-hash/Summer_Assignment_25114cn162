//Write a program to remove spaces from string
#include <stdio.h>
int main()
{
    int j,k;
    char string[100];
    printf("enter string you want to find length of:");
    //fgets("%s",string);//string already array address ko represent krta h
    fgets(string,100,stdin);
    
       for(j=0;string[j] !='\n';j++){
           
           if(string[j] == ' '){
              for(k=j;string[k] != '\n';k++){
                string[k]=string[k+1];
              }      
              j--;    
             }
    }
    printf("%s",string);
return 0;
}
