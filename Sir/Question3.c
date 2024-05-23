
// // Write a program to find the area of a right angle triangle
#include <stdio.h>

int main()
{
    float area, base, angle;
    printf("Enter the area:");
    scanf("%f", &area);
    printf("Enter the base:");
    scanf("%f", &base);
    angle = 0.5 * area * base;
    printf("The angle = %.2f", angle);
    return 0;
}








// int main() {
// // Create integer variables
// int length = 4;
// int width = 6;
// int area;

// // Calculate the area of a rectangle
// area = length * width;

// // Print the variables
// printf("Length is: %d\n", length);
// printf("Width is: %d\n", width);
// printf("Area of the rectangle is: %d", area);
// return 0;
// }