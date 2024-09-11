//  WAP to calculate GCD of two numbers  with recursion 

// GCD ussing recursion
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
    if (b != 0)
    {
        return FindGCd(b, a % b);
    }
    else
    {
        return a;
    }
}

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