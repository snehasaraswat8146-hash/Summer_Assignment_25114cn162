// Write a program to Remove duplicate characters
#include <stdio.h>
#include <string.h>
int main(){
    char arr[200];
    printf("Enter the string: ");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    for(int i=0;i<len-1;i++){
        int count=0;
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                for(int k=i;k<=len;k++){
                    if(k==len){
                        arr[k]='\0';
                    }
                    else{
                        arr[k]=arr[k+1];
                    }
                }
                i--;
                len--;
            }
        }
    }
    printf("%s",arr);
    return 0;
}