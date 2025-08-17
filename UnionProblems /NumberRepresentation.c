#include <stdio.h>

/*
Number Representation


Define a union Number with intValue (int) and floatValue (float).


Assign to one member and print both to see how memory is shared.
*/

typedef union {
    int intValue;
    float floatValue;
} Number;

int main(void)
{
    Number num;
    
    printf("Write intValue:\n");
    scanf("%i", &num.intValue);
    printf("intValue: %i, floatValue: %f\n", num.intValue, num.floatValue);
    
    printf("Write floatValue:\n");
    scanf("%f", &num.floatValue);

    printf("intValue: %i, floatValue: %f\n", num.intValue, num.floatValue);
    return 0;
}