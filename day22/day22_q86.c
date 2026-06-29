//Write a program to count words in a sentence
#include <stdio.h>
int main()
{
    int i,count=0;
    char string[100];
    printf("enter string you want to find length of:");
    //fgets("%s",string);//string already array address ko represent krta h
    fgets(string,100,stdin);
     int word=0;
    for(i=0;string[i] !='\n';i++){
       
       if(string[i] != ' ' && word==0 ){
          word=1;
          count=count+1;
       }
       if(string[i]==' '){
        word=0;
       }
    }
    printf("the total words in string are %d",count);
    return 0;
}
