#include <stdio.h>
int sum(int *a, int *b)
{
    int sum = *a + *b;
    return sum;
}
int main()
{
    int a = 10;
    int b = 12;
    int sumans = sum(&a, &b);
    printf("%d", sumans);
    return 0;
}