#include <stdio.h>

int swapval(int *n1, int *n2)
{
    *n1 = *n1 + *n2; // a = 2+3 = 5
    *n2 = *n1 - *n2; // b = 5-3 = 2
    *n1 = *n1 - *n2; // a = 5- 2 = 3
    return (*n1, *n2);
}
int main()
{
    int n1, n2;
    printf("Enter the num1: ");
    scanf("%d", &n1);
    printf("Enter the num2: ");
    scanf("%d", &n2);
    swapval(&n1, &n2);
    printf("The GCD of num1 is %d\n", n1);
    printf("The GCD of num2 is %d\n", n2);
}