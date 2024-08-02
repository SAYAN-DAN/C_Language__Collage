//   Write a program which takes the radius of a circle as input from the user, passes it to another function that computes the area and the circumference of the circle and displays the value of area and circumference from the main() function

#include<stdio.h>
float circleproperties(float radius , float *area , float *circumference);
int main() {
    float radius, area,circumference ;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    circleproperties(radius , &area, &circumference);
    printf("The area of circle is: %.2f\n", area);
    printf("The circumference of circle is: %.2f", circumference);
    return 0;
}

float circleproperties(float radius , float *area , float *circumference) {
    *area = 3.14 * radius * radius;
    *circumference = 2 * 3.14 * radius;
}
