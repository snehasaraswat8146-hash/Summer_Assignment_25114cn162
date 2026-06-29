//Write a program to count vowels and consonants in given string
#include <stdio.h>
int main()
{
    int i,count_v=0,count_c=0;
    char string[100],character;
    printf("enter string you want to find length of:");
    //fgets("%s",string);//string already array address ko represent krta h
    fgets(string,100,stdin);
    for(i=0;string[i] !='\n';i++){
        character=string[i];
            if((character >= 'A' && character <= 'Z') ||(character >= 'a' && character <= 'z')){
                if (character== 'a' || character== 'e' || character== 'i' || character== 'o' || character== 'u' || character== 'A' || character== 'E' || character== 'I' || character== 'O' || character== 'U' ){
                    count_v++;
                }
                else{
                    count_c++;
                }
            }
    }
printf("the consonants and vowels present in the string: %d %d",count_v,count_c);
return 0;
}