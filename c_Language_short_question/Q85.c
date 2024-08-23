#include<stdio.h>

int main() {
    int a, *b = &a , **c = &b; // Declaration of variables a, b (pointer to int), c (pointer to pointer to int)
    
    a = 4; // Assigning a value of 4 to variable a
    **c = 5; // Dereferencing twice to assign a value of 5 to variable a through pointer b
    
    printf("%d\n", a); // Print the value of a (should print 5)
    printf("%d\n", b); // Print the address stored in pointer b (should print the address of a)
    printf("%d\n", *b); // Dereference pointer b to get the value stored in a (should print 5)
    printf("%d\n", **c); // Dereference pointer c twice to get the value stored in a (should print 5)
    printf("%d\n", c); // Print the address stored in pointer c (should print the address of b)

    return 0;
}
