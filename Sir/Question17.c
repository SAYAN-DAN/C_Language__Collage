// Write a program to print the reverse of the digit
#include<stdio.h>
int main() {
      int n,remainder,reverse=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10;
         reverse = reverse * 10 + remainder;
         n = n / 10;
    }
    printf("The sum of the digit is:%d ", reverse);
    return 0;    
}