#include <stdio.h>
#include <string.h>

/*
Enum with Flags (Bitmask)
Task: Define an enum for file permissions:
READ = 1, WRITE = 2, EXECUTE = 4
Ask the user to input a number representing combined permissions (e.g., 3 → READ+WRITE).
Print which permissions are set.
*/

typedef enum
{
    READ = 1,
    WRITE = 2,
    EXECUTE = 4
} Flags;

int main(void)
{
    int from_user;
    printf("Write permissions number: \n");
    scanf("%d", &from_user);

    char result[100] = "";

    if (from_user & READ)
    {
        strcat(result, "READ ");
    }
    if (from_user & WRITE)
    {
        strcat(result, "WRITE ");
    }
    if (from_user & EXECUTE)
    {
        strcat(result, "EXECUTE ");
    }

    if (strlen(result) == 0)
    {
        printf("No permissions set.\n");
    }
    else
    {
        printf("Permissions: %s\n", result);
    }

    return 0;
}