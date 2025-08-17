#include <stdio.h>


/*
Float–Int Reinterpretation


Define a union Value with floatValue (float) and intValue (int).


Read a float and print its integer representation (bits reinterpreted).
*/

typedef union {
    float floatValue;
    int intValue;
} Value;

int main(void)
{
    Value data;
    
    printf("Write floatValue:\n");
    scanf("%f", &data.floatValue);
    printf("intValue: %d\n", data.intValue);

    return 0;
}