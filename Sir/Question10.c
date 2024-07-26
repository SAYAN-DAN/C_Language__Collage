// Write a program to find the largest among three number using  conditional operator..

#include<stdio.h>
int main() {
      int num1, num2, num3, largest;
      printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    printf("Enter the third number: ");
    scanf("%d", &num3);
    largest = (num1 > num2) ? ((num1> num3)? num1 : num3 ) : ((num2 > num3) ? num2 : num3);
    printf("The largest number is: %d", largest);
    return 0;
}