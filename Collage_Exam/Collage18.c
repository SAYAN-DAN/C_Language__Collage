#include <stdio.h>

// Function to calculate GCD using iteration
int gcd(int a, int b) {    // a =48, b=18
    while (b != 0) {
        int temp = b;     // temp = 18
        b = a % b;        // b= 12,6
        a = temp;         // a = 18
    }
    return a;  // When b is 0, a contains the GCD
}

int main() {
    int num1, num2;

    printf("Enter two numbers to calculate their GCD: ");
    scanf("%d %d", &num1, &num2);

    // Ensure the numbers are non-negative
    if (num1 < 0 && num2 < 0) {
        printf("Please enter non-negative integers.\n");
    } else {
        int result = gcd(num1, num2);
        printf("GCD of %d and %d is %d\n", num1, num2, result);
    }

    return 0;
}




#include <stdio.h>
// Function to calculate GCD using recursion
int gcd(int a, int b) {
    if (b == 0) {
        return a;  // Base case: if b is 0, the GCD is a
    } else {
        return gcd(b, a % b);  // Recursive case: gcd(a, b) = gcd(b, a % b)
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers to calculate their GCD: ");
    scanf("%d %d", &num1, &num2);

    // Ensure the numbers are non-negative
    if (num1 < 0 || num2 < 0) {
        printf("Please enter non-negative integers.\n");
    } else {
        int result = gcd(num1, num2);
        printf("GCD of %d and %d is %d\n", num1, num2, result);
    }

    return 0;
}
