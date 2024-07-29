#include<stdio.h>

int fact(int n) {
    int fact;
 for (int i = 1; i <=n; i++)
    {
        fact = fact*i;
    }
}
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d" , &n);
    int factorial = fact(n);
    printf("The factorial of number is: %d", factorial);
    return 0;    
}