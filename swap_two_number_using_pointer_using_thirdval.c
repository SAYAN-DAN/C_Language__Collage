#include <stdio.h>

int swapval(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
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


