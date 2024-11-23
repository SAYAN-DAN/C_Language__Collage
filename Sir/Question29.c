// Write a program to add two number using function
#include <stdio.h>
int addTwo(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b, sum;
    printf("Enter the number1: ");
    scanf("%d", &a);
    printf("Enter the number2: ");
    scanf("%d", &b);
    sum = addTwo(a, b);
    printf("The sum of two number is: %d", sum);
    return 0;
}

