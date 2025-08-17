#include <stdio.h>

/*
Boolean–Integer Test


Define a union Flag with int number and char flag.


Assign to number and print flag to see the ASCII of the first byte.
*/

typedef union {
    int number;
    char flag;
} Flag;

int main(void)
{
    Flag data;
    printf("Write number:\n");
    scanf("%d", &data.number);

    printf("Flag: %c\n", data.flag);
    
    return 0;
}