//  WAP to calculate GCD of two numbers  with recursion 

// GCD ussing recursion
// #include <stdio.h>
// int GCDcal(int n1, int n2);
// int main()
// {
//     int n1;
//     printf("Enter the number:");
//     scanf("%d", &n1);
//     int n2;
//     printf("Enter the number:");
//     scanf("%d", &n2);
//     int gcdval = GCDcal(n1, n2);
//     printf("The GCD value is:%d", gcdval);
//     return 0;
// }

// int GCDcal(int n1, int n2)
// {
//     if (n2 != 0)
//     {
//         return (n2, n1 % n2);
//     }
//     else
//     {
//         return n1;
//     }
// }

// GCD without recursion

#include<stdio.h>
int gcd(int a, int b);
int main() {
    int n1;
    printf("Enter the number:");
    scanf("%d", &n1);
    int n2;
    printf("Enter the number:");
    scanf("%d", &n2);
    int gcdval = gcd(n1,n2);
    printf("The GCD value of %d and %d is: %d",n1,n2,gcdval);
    return 0;
}
int gcd(int a, int b) {
    int temp;
    while ( b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;    
}