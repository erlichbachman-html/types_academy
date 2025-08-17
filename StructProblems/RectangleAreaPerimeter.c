#include <stdio.h>

/*
Rectangle Area & Perimeter


Define a struct Rectangle with length and width (int).


Read values, calculate area and perimeter, and print them.
*/

struct {
    unsigned int lenght;
    unsigned int width;
} Rectangle;

int main(void)
{
    printf("Write lenght:\n");
    scanf("%i", & Rectangle.lenght);

    printf("Write width:\n");
    scanf("%i", & Rectangle.width);

    unsigned int area = Rectangle.lenght * Rectangle.width;
    unsigned int perimetr = (Rectangle.lenght + Rectangle.width) * 2;
    
    printf("Area: %i, Perimetr: %i", area, perimetr);
    return 0;
}