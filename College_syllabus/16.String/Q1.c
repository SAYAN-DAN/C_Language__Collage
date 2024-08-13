#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = str;  // Pointer to the first character of the string

    while (*ptr != '\0') {  // Loop until the null character is reached
        printf("Character: %c, Address: %p\n", *ptr, (void*)ptr);
        ptr++;  // Move the pointer to the next character
    }

    return 0;
}
