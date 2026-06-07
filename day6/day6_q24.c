// Write a program to find x^n without using pow() function
# include <stdio.h>
int main()
{
    int x,n,result=1;
    printf("enter the base number:");
    scanf("%d",&x);
    printf("enter the exponent");
    scanf("%d",&n);
    if(n<0){
        printf("enter a positive exponent");
        return 0;
    }
    for(int i=1;i<=n;i++){
        result=result*x;
    }
    printf("result is %d",result);
    return 0;
}