#include <stdio.h>

/*
Body Mass Index


Define struct Person with weight and height (float).


Read data, calculate BMI, and print the category (Underweight, Normal, Overweight).
*/

typedef struct
{
    float weight;
    float height;
} Person;

int main(void)
{
    Person human;
    printf("Write weight:\n");
    scanf("%f", &human.weight);
    printf("Write height(M):\n");
    scanf("%f", &human.height);
    float bmi= human.weight/(human.height*human.height);
    if (bmi < 18.5)
    {
        printf("Underweight\n");
    }
    else if (bmi > 18.5 && bmi < 24.9)
    {
        printf("Normal weight\n");
    }
    else if (bmi > 25 && bmi < 29.9)
    {
        printf("Overweight\n");
    }
    else
    {
        printf("Obesity\n");
    };
    return 0;

}