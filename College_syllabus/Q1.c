//  WAP to print the sum and product of digits of an integer.
#include <stdio.h>
int main()
{
    int n, remainder, sum = 0, reverse = 0, product = 1;
    printf("Enter the number:");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + remainder;
        reverse = reverse * 10 + remainder;
        product = product * remainder;
        n = n / 10;
    }

    printf("The sum is:%d\n", sum);
    printf("The reverse is:%d\n", reverse);
    printf("The product is:%d\n", product);
    return 0;
}
