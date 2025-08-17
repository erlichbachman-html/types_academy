#include <stdio.h>

/*
Enum and Switch
Task:   Define an enum for traffic light signals: RED, YELLOW, GREEN.
Read a signal from the user (as integer 0–2).
Use a switch statement to print:
RED → Stop
YELLOW → Ready
GREEN → Go
*/

typedef enum
{
    RED,
    YELLOW,
    GREEN
} Svetofor;

int main(void)
{
    int signal;
    printf("Write signal from 0 to 2:\n");
    scanf("%d", &signal);
    switch (signal)
    {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Ready\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }
    return 0;

}

