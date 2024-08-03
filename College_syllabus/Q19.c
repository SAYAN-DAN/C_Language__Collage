//  WAP to calculate Factorial of a number (i)using recursion, (ii) using iteration

// part1 -----
// Factorial using recursion
// #include<stdio.h>
// int findFact(int n);
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d" , &n);
//     int factorial = findFact(n);
//     printf("The factorial of %d is: %d", n,factorial);
//     return 0;
// }

// int findFact(int n) {
//     if ( n <= 1)
//     {
//         return 1;
//     }
//     else
//     {
//     return n * findFact(n-1);
//     }
// }

// Factorial using iteration
// #include <stdio.h>
// int main()
// {
//     int n, fact = 1;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     printf("The factorial of %d is: %d", n, fact);
//     return 0;
// }

// Factorial using Function.
#include <stdio.h>
int Findfact(int n);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int fact = Findfact(n);
    printf("The factorial of %d is: %d", n, fact);
}
int Findfact(int n){
    int factorial = 1;
    for (int i = 1; i <=n; i++)
    {
        factorial *= i;
    }
    return factorial;    
}