//Write a program to Check anagram strings.
//Character ki frequency same ho-->Do strings agar same characters ko same frequency ke saath contain kare but zaruri nhi ki dono strings same ho
#include <stdio.h>
int main()
{
    int length=0,length1=0,i,anagram=1;
    char string1[100];
    printf("enter string1 you want to find length of:");
    //fgets("%s",string);//string already array address ko represent krta h
    fgets(string1,100,stdin);
    for(i=0;string1[i] !='\n';i++){
        
            length=length+1;
    }
    printf("the length of the string1 is: %d \n",length);
     // string 2
    
    char string2[100];
    printf("enter string2 you want to find length of:");
    
    fgets(string2,100,stdin);
    for(i=0;string2[i] !='\n';i++){
        
            length1=length1+1;
    }
    printf("the length of the string2 is: %d",length1);
    //now checking if anagram or not
    if(length != length1){
        printf("not anagram");
        return 0;
    }
    int freq[256]={0};
    for(i=0;string1[i] !='\n';i++){
        freq[string1[i]]++;
    }
    for(i=0;string2[i] !='\n';i++){
        freq[string2[i]]--;
    }
    for(i=0;i<=256;i++){
    
    if (freq[i]!=0){
        anagram=0;
       break;
    }
}
if(anagram==0){
    printf("anagram");
}
else{
    printf("not anagram");
}
    return 0;
}
