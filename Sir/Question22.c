// Write a program to find the sum of Digit
#include <stdio.h>
int main()
{
    int n, remainder, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    printf("The sum of the digit is:%d ", sum);
    return 0;
}
