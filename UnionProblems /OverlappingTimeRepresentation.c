#include <stdio.h>

/*
Overlapping Time Representation


Define a union Time with two structs inside:


One with int hours and int minutes


Another with a single float totalHours


Read one form, then print the other form using the same memory.
*/

typedef union
{
    struct {
        int hours;
        int minutes;
    } HoursAndMinutes;
    struct {
        float totalHours;
    } TotalTime;
  
} Time;


int main(void)
{
    Time time;
    time.HoursAndMinutes.hours = 8;
    time.HoursAndMinutes.minutes = 15;
    printf("TotalTime: %f\n", time.TotalTime.totalHours);
    return 0;
}
