//Write a program to compress a string
#include <stdio.h>
#include <string.h>
int main(){
    char arr[200],arr1[200];
    printf("Enter the string: ");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]='\0';//newline ka index return krne ke liye
    int len=strlen(arr),a=0;
    for(int i=0;i<len;i++){
        int count=0,count1=0;
        for(int j=i;j<len;j++){//counts frequency
            if(arr[i]==arr[j]){
                count++;
            }
        }
        for(int k=0;k<i;k++){
            if(arr[i]==arr[k]){// duplicates to nhi?
                count1++;
            }
        }
        if(count1==0){ // agar char 1st time mila ho
            arr1[a]=arr[i];//storing charcter
            a++;
            arr1[a]=count+'0';//jo humari count aayegi usko character mei convert krne ke liye
            a++;
        }
    }
    printf("Compressed String : %s",arr1);
    return 0;
} 