// Write a program to find the area of a circle

#include <stdio.h>

int main()
{
    float r, area;
    printf("Enter the radious:");
    scanf("%f", &r);
    area = 3.14 * r * r;
    printf("The area = %.2f", area);
    return 0;
}

