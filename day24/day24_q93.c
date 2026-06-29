//write a program to check string rotation
#include <stdio.h>

int main()
{
    int length=0,i;
    char string[100];
    printf("enter string:");
    fgets(string,100,stdin);
    for(i=0;string[i] !='\n';i++){
        length++;
    }
    printf("the length of the string is: %d\n",length);
// rotationnnn
    int k;
    printf("enter the no of character u want to move in the string:");
    scanf("%d",&k);

    if(k > length){ // agar suppose k humne bda le liya string length se 
        k=k % length;
    }
    if(k==0){
        printf("%s",string);
        return 0;
    }
    //nowww ab hum main rotation krenge
    char temp[k];
    for(i=0;i<k;i++){
        temp[i]=string[i]; //store first k characters
    }
    for(i=0;i<length-k;i++){
        string[i]=string[i+k];//left shift
    }
    for(i=length-k;i<length;i++){
        string[i]=temp[i-(length-k)]; //placing the rest of the character after rotation
    }
    printf("%s",string);
    return 0;
}