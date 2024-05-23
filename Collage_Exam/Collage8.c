// Write a macro that swaps two numbers. WAP to use it.

#include <stdio.h>
#define SWAP(a, b) \
    do {           \
        int temp = a; \
        a = b;     \
        b = temp;  \
    } while (0)

int main() {
    int x = 10;
    int y = 20;

    // Print original values
    printf("Before swap: x = %d, y = %d\n", x, y);

    // Use the SWAP macro
    SWAP(x, y);

    // Print swapped values
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
