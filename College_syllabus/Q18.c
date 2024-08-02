// 1---------------
// Fibonacci series using normal integer..
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int a = 0, b = 1;
//     printf("%d\n%d\n", a, b);
//     for (int i = 2; i < n; i++)
//     {
//         int fibo = a + b;
//         printf("%d\n", fibo);
//         a = b;
//         b = fibo;
//     }
//     return 0;
// }

// 2---------
// print Fibonacci series using recursion..
#include <stdio.h>
int findFibo(int n);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("The %d fibo is :%d\n", i, findFibo(i));
    }
    return 0;
}

int findFibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int x = findFibo(n - 2) + findFibo(n - 1);
    return x;
}