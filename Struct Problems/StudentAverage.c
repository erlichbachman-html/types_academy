#include <stdio.h>
/*
Student Average


Define a struct Student with mathGrade, physicsGrade, and chemistryGrade (float).


Read grades, calculate average, and print it.
*/

struct {
    float mathGrade;
    float physicsGrade;
    float chemistryGrade;

} Student;

int main(void)
{
    float average;
    printf("Write mathGrade:\n");
    scanf("%f", &Student.mathGrade);

    printf("Write physicsGrade:\n");
    scanf("%f", &Student.physicsGrade);

    printf("Write chemistryGrade:\n");
    scanf("%f", &Student.chemistryGrade);
    
    average = (Student.mathGrade + Student.physicsGrade + Student.chemistryGrade)/3;
    printf("Average: %f", average);
    return 0;
}