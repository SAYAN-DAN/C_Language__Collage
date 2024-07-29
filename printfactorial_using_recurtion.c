#include<stdio.h>
int factorial(int n) {
    if (n <=1){
        return 1;
    }    
    else{
    int recursion = n*factorial(n-1);
    }
}
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("The Factorial of a number is: %d", fact);
    return 0;
}

