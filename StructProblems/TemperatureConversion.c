#include <stdio.h>

/*
Temperature Conversion


Define struct Temperature with celsius and fahrenheit (float).


Read Celsius, calculate Fahrenheit, store it, and print both.
*/

struct Temperature
{
    float celsius;
    float fahrenheit;
};

int main(void)
{
    struct Temperature data;
    printf("Write Celsius: ");
    scanf("%f", &data.celsius);

    data.fahrenheit = (data.celsius*9/5)+32;
    printf("Celsius: %f, Fahrenheit: %f\n", data.celsius, data.fahrenheit);

    return 0;
}