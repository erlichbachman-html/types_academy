#include <stdio.h>
#include <math.h>
/*
Point Distance


Define struct Point with x and y (float).


Read coordinates for two points, calculate the Euclidean distance, and print it.
*/

typedef struct {
    float x;
    float y;
} Point;

int main(void)
{
    Point point1 = {2, 5};
    Point point2 = {4, 9};
    float distance = sqrt((point2.x - point1.x)*(point2.x - point1.x) + (point2.y - point1.y)*(point2.y - point1.y));
    printf("Distance: %f", distance);
    return 0;
}