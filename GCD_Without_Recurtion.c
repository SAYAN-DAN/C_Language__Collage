#include <stdio.h>
int FindGCd(int a, int b);
int main()
{
    int n1;
    printf("Enter the number1: ");
    scanf("%d", &n1);
    int n2;
    printf("Enter the number1: ");
    scanf("%d", &n2);
    int gcd = FindGCd(n1, n2);
    printf("The GCD value of %d and %d is %d", n1, n2, gcd);
}
int FindGCd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}