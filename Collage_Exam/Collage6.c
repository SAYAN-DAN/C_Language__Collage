//  Write a function to find whether a given no. is prime or not. Use the same to generate the prime numbers less than 100.

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    if (num == 2) {
        return 1; // 2 is a prime number
    }
    if (num % 2 == 0) {
        return 0; // Even numbers greater than 2 are not prime
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return 0; // If divisible by any number other than 1 and itself, it's not prime
        }
    }
    return 1; // Number is prime
}

int main() {
    // Print prime numbers less than 100
    printf("Prime numbers less than 100 are:\n");
    for (int i = 2; i < 100; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
