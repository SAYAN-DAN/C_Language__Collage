// Write a program to find the GCD of two number..
#include <stdio.h>

// Function to find the GCD of two numbers using recursion
int findGCD(int n1, int n2)
{
    if (n2 != 0)
    {
        return findGCD(n2, n1 % n2);
    }
    else
    {
        return n1;
    }
}

int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("GCD of %d and %d is %d\n", n1, n2, findGCD(n1, n2));
    return 0;
}
