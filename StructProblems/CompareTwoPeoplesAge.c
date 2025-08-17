#include <stdio.h>

/*
Compare Two People’s Age


Define struct Person with age (int) and height (float).


Read data for two people and print who is older.
*/

typedef struct
{
    unsigned int age;
    float height;
} Person ;


int main(void)
{
    Person p1 = {25, 140};
    Person p2 = {25, 180};
    if (p1.age>p2.age)
    {
        printf("Person1 is older");
    }
    else if (p1.age<p2.age)
    {
        printf("Person2 is older");
    } else
    {
        printf("Persons have the same age\n");
    };
    return 0;
}