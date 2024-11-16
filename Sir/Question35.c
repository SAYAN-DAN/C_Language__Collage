// Write a program to find the sum of digit using Recursion...

#include <stdio.h>

int sumfDigit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + sumfDigit(n / 10);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The sum of dgit is: %d", sumfDigit(n));
}