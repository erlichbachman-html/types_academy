#include <stdio.h>

/*
Currency Reuse


Define a union Currency with float usd and float eur.


Assign USD, then assign EUR, and print both to see overwriting behavior.

*/

typedef union
{
    float usd;
    float eur; 
} Currency;

int main(void)
{
    Currency money;
    money.usd = 20.0;
    printf("USD: %f\n", money.usd);
    money.eur = 18.0;
    printf("EUR: %f\n", money.eur);
    printf("USD: %f\n", money.usd);
    return 0;
    
}