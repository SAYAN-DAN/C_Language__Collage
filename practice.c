//  WAP to compute the sum of the first n terms of the following series S = 1+1/2+1/3+1/4+……

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    // Input the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; ++i) {
        sum = sum + 1.0 / i; // Add the reciprocal of each term to the sum
    }

    // Print the sum
    printf("Sum of the series up to %d terms: %.2f\n", n, sum);

    return 0;
}
