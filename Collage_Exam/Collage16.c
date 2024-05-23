
// WAP to display Fibonacci series using integer
#include <stdio.h>

// Function to generate and display Fibonacci series
void displayFibonacci(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    // Input validation
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        displayFibonacci(n);
    }

    return 0;
}






// QUESTION NO-2--

// WAP to display Fibonacci series using recursion

#include <stdio.h>

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to display Fibonacci series up to n terms using recursion
void displayFibonacci(int n) {
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    // Input validation
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        displayFibonacci(n);
    }

    return 0;
}
