
// Make a function which calculates the factorial of n using integer 
#include <stdio.h>
// Function to calculate factorial using iteration
int factorial(int n) {
    int result = 1;  // Start with 1 since multiplying by 1 has no effect

    // Loop from 1 to n, multiplying the result by each number
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;  // Return the final result
}
int main() {
    int n;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);

    // Input validation
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(n);
        printf("Factorial of %d is %d\n", n, result);
    }
    return 0;
}








// Make a function which calculates the factorial of n using recursion
#include <stdio.h>
// Function to calculate factorial using recursion
int factorial(int n) {
    if (n <= 1) {
        return 1;  // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}
int main() {
    int n;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);
    // Input validation
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(n);
        printf("Factorial of %d is %d\n", n, result);
    }
    return 0;
}
