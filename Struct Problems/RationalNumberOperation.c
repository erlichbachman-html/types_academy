#include <stdio.h>

/*
Rational Number Operation


Define a struct called Rational with two members: numerator, denominator (int)


Read two rational numbers and print their sum and product.
*/

typedef struct
{
    int numerator;
    int denominator;
} Rational;

int main(void)
{
    Rational n1, n2;
    printf("Write n1 rational number:\n");
    scanf("%d %d", &n1.numerator, &n1.denominator);
    printf("Write n2 rational number:\n");
    scanf("%d %d", &n2.numerator, &n2.denominator);
    
    Rational sum, product;
    sum.numerator = n1.numerator * n2.denominator + n2.numerator * n1.denominator;
    sum.denominator = n1.denominator * n2.denominator;
    product.numerator = n1.numerator * n2.numerator;
    product.denominator = n1.denominator * n2.denominator;

    printf("Sum: %d/%d\n", sum.numerator, sum.denominator);
    printf("Product: %d/%d\n", product.numerator, product.denominator);

    return 0;
}
