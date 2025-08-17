#include <stdio.h>

/*
Circle Measurements


Define struct Circle with radius (float).


Read radius, calculate and print circumference and area.
*/

struct
{
    float radius;
} Circle;

int main(void)
{
    const float PI = 3.14;
    Circle.radius = 21;
    float circumference = PI * 2 * Circle.radius;
    float area = PI * Circle.radius * Circle.radius;
    printf("Circumference: %f. Area: %f\n", circumference, area);
    return 0;

}