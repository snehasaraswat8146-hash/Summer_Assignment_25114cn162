// write a program to recursive factorial of number
# include <stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %d",n,fact);
        return 0;
}