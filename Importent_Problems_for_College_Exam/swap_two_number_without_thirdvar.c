#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After the Swap:\n");
    printf("The a is:%d\n", a);
    printf("The a is:%d", b);
    return 0;
}