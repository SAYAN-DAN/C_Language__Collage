 // Write a program to find the sum and product of Digit
#include<stdio.h>
int main() {
    int n,remainder,sum=0,product = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10;
         sum = sum + remainder;
         product = product * remainder;
         n = n / 10;
    }
    printf("The sum of the digit is:%d\n", sum);
    printf("The sum of the digit is:%d ", product);
    return 0;    
}