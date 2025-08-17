#include <stdio.h>

/*
Integer–Char Overlap


Define a union Data with intValue (int) and charValue (char).


Assign a value to intValue and print charValue to see the first byte.*/

typedef union {
    int intValue;
    char charValue;
} Data;

int main(void)
{
    Data data;
    printf("Write intValue:\n");
    scanf("%i", &data.intValue);

    printf("charValue: %c\n", data.charValue);
    
    return 0;
}