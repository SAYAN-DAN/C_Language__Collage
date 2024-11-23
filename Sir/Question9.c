// Write a program to find the largest among two number using  conditional operator..

#include <stdio.h>
int main()
{
  int num1, num2, largest;
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);
  largest = (num1 > num2) ? num1 : num2;
  printf("The largest number is: %d", largest);
  return 0;
}