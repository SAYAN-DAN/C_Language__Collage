// Write a program to find the area of a circle using function
#include <stdio.h>
float findarea(int n)
{
    return 3.14 * n * n;
}

int main()
{
    int n;
    printf("Enter the radius: ");
    scanf("%d", &n);
    float area = findarea(n);
    printf("The area of a circle is: %f", area);
    return 0;
}
