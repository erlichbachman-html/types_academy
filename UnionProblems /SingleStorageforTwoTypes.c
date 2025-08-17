#include <stdio.h>

/*
Single Storage for Two Types


Define a union Measurement with int length and float weight.


Let user choose which one to enter, then print the stored value.
*/

typedef union {
    int length;
    float weight;
} Measurement;

int main(void)
{
    Measurement data;
    char from_user[10];
    printf("Write `length` or `weight`:\n");
    scanf("%s", from_user);
    if (from_user[0] == 'l')
    {
        printf("Write length:\n");
        scanf("%d", &data.length);
        printf("Stored length: %d\n", data.length);
    }
    else if (from_user[0] == 'w')
    {
        printf("Write weight:\n");
        scanf("%f", &data.weight);
        printf("Stored weight: %f\n", data.weight);
    }
    else
    {
        printf("Write `length` or `weight`!!!!!.\n");
    }

}