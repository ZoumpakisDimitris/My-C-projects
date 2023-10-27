#include <stdio.h>
int main(){
    const int day_week = 7;
    const int week_year = 52;
    const int hours_day = 24;

    int hours_year = day_week * week_year * hours_day; // calculating the number of hours in a year


        printf("Result: number of hours in a year is: %d", hours_year); // displaying the result

    return 0;
}