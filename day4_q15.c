// write a program to check Armstrong number
#include <stdio.h>

int main()
{
    int temp, n, sum = 0, digit, count = 0, original;

    printf("enter the number:");
    scanf("%d", &n);

    original = n;

    if(n == 0){
        printf("the Armstrong number is 0");
        return 0;
    }

    if(n < 0){
        printf("Armstrong number is generally considered for positive numbers");
        return 0;
    }

    // counting digits
    temp = n;
    while(temp != 0){
        count++;
        temp = temp / 10;
    }

    printf("the number of digit is:%d\n", count);

    // Armstrong calculation
    temp = n;

    while(temp != 0){
        digit = temp % 10;

        // FIX: pow() hata diya, integer power use kiya
        int p = 1;
        for(int i = 1; i <= count; i++){
            p = p * digit;
        }

        sum = sum + p;
        temp = temp / 10;
    }

    if(original == sum){
        printf("the Armstrong number is:%d", original);
    }
    else{
        printf("not an Armstrong number is:%d", original);
    }

    return 0;
}
