//  WAP to reverse a number 
#include <stdio.h>
int main() {
    int num, reversedNumber = 0, remainder;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10; // Get the rightmost digit
        reversedNumber = reversedNumber * 10 + remainder; // Append the digit to reversedNumber
        num /= 10; // Remove the rightmost digit
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
