//Write a program to Find longest word.
#include <stdio.h>
#include <string.h>
int main(){
    int len1;
    char arr[200],arr1[200],count1=0;
    printf("Enter the string: ");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    for(int i=0;i<len;i++){
        int count=0;
        for(int j=i;j<len;j++){
            if(arr[j]!=' '){
                count++;
            }
            else if (arr[j]==' '){
                break;
            }
        }
        if (count1<count){
            count1=count;
            len1=i;
        }
    }
    for(int i=len1;i<len1+count1;i++){
        arr1[i-len1]=arr[i];
        arr1[count1]='\0';
    }
    printf("Longest Word in string: %s",arr1);
    return 0;
}