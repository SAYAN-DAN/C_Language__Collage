// Write a program to find the factorial of a number using Function...
#include<stdio.h>
int fact(int n){
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        num = num * i;
    }
    return num;    
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int factorial = fact(n);
    printf("The factorial of a number is: %d", factorial);
    return 0;
}

