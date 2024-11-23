// WAP to swap two integer.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, temp;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("The value of a before swaping: %d\n", a);
    printf("The value of b before swaping: %d\n", b);
    temp = a;
    a = b;
    b = temp;
    printf("The value of a after swaping: %d\n", a);
    printf("The value of b after swaping: %d\n", b);
    return 0;
}