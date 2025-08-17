#include <stdio.h>

/*
Task:
Define an enum for the four seasons: WINTER, SPRING, SUMMER, FALL.
Ask the user to input a month number (1–12).
Use the enum to determine and print which season the month belongs to.
For example:
December, January, February → WINTER
March, April, May → SPRING
June, July, August → SUMMER
September, October, November → FALL

*/

typedef enum
{
    WINTER,
    SPRING,
    SUMMER,
    FALL
} Season;

int main(void)
{
    int month;
    Season season;

    printf("Write month numer from 1 to 12:\n");
    scanf("%d", &month);
    switch (month)
    {
        case 12:
        case 1:
        case 2:
            season = WINTER;
            printf("Season: WINTER\n");
            break;
        case 3:
        case 4:
        case 5:
            season = SPRING;
            printf("Season: SPRING\n");
            break;
        case 6:
        case 7:
        case 8:
            season = SUMMER;
            printf("Season: SUMMER\n");
            break;
        case 9:
        case 10:
        case 11:
            season = FALL;
            printf("Season: FALL\n");
            break;
    }
    return 0;
}