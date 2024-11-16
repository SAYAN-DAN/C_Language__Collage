// Write a program to find the sum of the following series...

#include <stdio.h>

int main()
{
    int i, n;
    float fact = 1.0, sum = 0.0;
    printf("Enter the term you want to calculate: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact *= i;
        sum = sum + i / fact; // Corrected division in summation
    }

    printf("The required value is: %f", sum);

    return 0;
}
