#include <stdio.h>

/*
Enum with Loop and Array
Task:  Define an enum for pizza sizes: SMALL, MEDIUM, LARGE, EXTRA_LARGE.
Create a corresponding array of prices for each size.
Loop through the enum values and print each size name with its price.
Bonus: Ask the user to select a size and print the price of the chosen pizza.
*/

typedef enum
{
    SMALL,
    MEDIUM,
    LARGE,
    EXTRA_LARGE
} Size;

int main(void)
{
    float prices[] = {1200, 1800, 2500, 3800};
    Size size;
    for (size = SMALL; size<=EXTRA_LARGE; size++)
    {
        switch (size)
        {
            case SMALL:
                printf("SMALL PRICE: %f\n", prices[size]);
                break;
            case MEDIUM:
                printf("MEDIUM PRICE: %f\n", prices[size]);
                break;
            case LARGE:
                printf("LARGE PRICE: %f\n", prices[size]);
                break;
            case EXTRA_LARGE:
                printf("EXTRA_LARGE PRICE: %f\n", prices[size]);
                break;
        }
    }
    return 0;
}