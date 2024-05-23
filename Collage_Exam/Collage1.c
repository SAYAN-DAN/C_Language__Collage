// WAP to print the sum and product of digits of an integer
#include <stdio.h>
int main() {
    int num, digit, sum = 0, product = 1;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate sum and product of digits
    while (num > 0) {
        digit = num % 10; // Get the rightmost digit
        sum += digit; // Add digit to sum
        product *= digit; // Multiply digit to product
        num /= 10; // Remove the rightmost digit
    }


    // Print the sum and product
    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);

    return 0;
}

