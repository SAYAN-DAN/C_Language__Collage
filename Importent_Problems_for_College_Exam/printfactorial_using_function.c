#include <stdio.h>
int fact(int n)
{
    int fact1 = 1;
    for (int i = 1; i <= n; i++)
    {
        fact1 = fact1 * i;
    }
    return fact1;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int factorial = fact(n);
    printf("The factorial of number is: %d", factorial);
    return 0;
}