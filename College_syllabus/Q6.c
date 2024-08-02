// Write a function to find whether a given no. is prime or not. Use the same to generate the prime
// numbers less than 100

// part1 --  Write a function to find whether a given no. is prime or not

// #include<stdio.h>
// int main() {
//     int n,i;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for ( i = 2; i <= n-1; i++)
//     {
//         if (n % i == 0)
//         {
//             printf("This is not a prime");
//             break;
//         }
//     }
//     if (n == i)
//     {
//         printf("This is a prime");
//     }
//     return 0;
// }

// print 1 tp 100

#include <stdio.h>
int main()
{
    int n;
    for (int n = 2; n <= 100; n++)
    {
        int isprime = 1;
        for (int j = 2; j <= n / 2; j++)
        {
            if (n % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime)
        {
            printf("%d\n", n);
        }
    }
    return 0;
}