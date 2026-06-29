//Write a program to Find maximum occurring character
#include <stdio.h>
int main()
{
    int length=0,i,maximum_freq=0;
    char string1[100],maximum_char;
    printf("enter string1 you want to find length of:");
    //fgets("%s",string);//string already array address ko represent krta h
    fgets(string1,100,stdin);
    for(i=0;string1[i] !='\n';i++){
        
            length=length+1;
    }
    printf("the length of the string1 is: %d \n",length);
    
    int freq[256]={0};
    for(i=0;string1[i] !='\n';i++){
        freq[string1[i]]++;
    }
    for(i=0;i<=255;i++){
       if(freq[i]>maximum_freq){
        maximum_freq=freq[i];
        maximum_char=i;
       }
       
    }
  printf("%c %d ",maximum_char,maximum_freq);

    return 0;
}
