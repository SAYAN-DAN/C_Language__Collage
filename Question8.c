// Write a program to text the laggest among three number...

#include<stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter the three number: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("The larger number is %d", num1);
        }
        else
        {
            printf("The larger number is %d", num3);
        }        
    }
    else
    {
        if (num2 > num3)
        {
            printf("The larger number is %d", num2);
        }
        else
        {
            printf("The larger number is %d", num3);
        }        
    }
    return 0;    
}