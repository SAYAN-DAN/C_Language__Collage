// WAP to swap two integer without using third variable.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("The value of a before swaping: %d\n", a);
    printf("The value of b before swaping: %d\n", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of a after swaping: %d\n", a);
    printf("The value of b after swaping: %d\n", b);
    return 0;
}