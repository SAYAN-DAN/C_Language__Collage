// Write a program to convert a given number of days into months and days.


#include<stdio.h>
int main() {
    int months,days;
    printf("Enter the days: ");
    scanf("%d", &days);
    months = days/30;
    days = days % 30;
    printf("%d months and %d days",months,days);
}