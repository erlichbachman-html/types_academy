#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    char name[100];
    int id;
    enum
    {
        CPP,
        WEB,
        AI,
        DevHack
    } Language;
    enum
    {
        COMPUTER_SCIENCE, 
        CORE_LANGUAGE, 
        SPECIALTIES
    } Phase;
    int monthExams[3];
    float totalScore;
    bool passed;
} Student;

int main(void)
{
    Student student1 = {
        .name={"Antonio Margarrretti"},
        .id = 1,
        .Language = DevHack,
        .monthExams = {100,100,100},
    };
    student1.totalScore = (student1.monthExams[0] * 0.2) + (student1.monthExams[1] * 0.2) + (student1.monthExams[2] * 0.8);
    if (student1.totalScore>=80.0)
    {
        student1.passed = true;
        printf("Student %s can move to next phase", student1.name);
    }
    else if (student1.totalScore<80)
    {
        student1.passed = false;
        printf("Student %s can move to next phase", student1.name);

    }
    return 0;
}