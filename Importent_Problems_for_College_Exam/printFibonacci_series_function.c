
#include <stdio.h>
int fibo(int n)
{
    int a = 0, b = 1, fibo;
    printf("%d\n%d\n", a, b);
    for (int i = 2; i < n; i++)
    {
        fibo = a + b;
        printf("%d\n", fibo);
        a = b;
        b = fibo;
    }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    fibo(n);
    return 0;
}