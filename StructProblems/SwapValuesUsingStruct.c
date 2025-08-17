#include <stdio.h>

/*
Swap Values Using Struct


Define struct Pair with two integers.


Read the values, swap them (via a temp struct), and print the result.
*/

typedef struct {
    int first;
    int second;
} Pair;

int main(void)
{
    Pair pair; 
    /*ПОБИТОВЫЕ ОПЕРАЦИИ РУЛЯТ!*/
    printf("Write first value:\n");
    scanf("%d", &pair.first);

    printf("Write second value:\n");
    scanf("%d", &pair.second);
    pair.first ^= pair.second;
    pair.second ^= pair.first;
    pair.first ^= pair.second;
    printf("Result:\n");
    printf("First: %d, Second: %d\n", pair.first, pair.second);
    return 0;

}