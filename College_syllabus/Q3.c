// 3. WAP to compute the sum of the first n terms of the following series S = 1+1/2+1/3+1/4+……

#include <stdio.h>

int main()
{
    int n;
    float sum = 0.0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i; // Ensure floating-point division
    }
    printf("The sum of the first %d terms is: %f\n", n, sum);
    return 0;
}
