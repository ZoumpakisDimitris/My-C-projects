#include <stdio.h>
 int main()
  {
    int day;
    int month;
    int year;

    printf("Please enter the day you were born as a number:\n");
        scanf("%d", &day);
    printf("Please enter the month you were born as a number:\n");
        scanf("%d", &month);
    printf("Please enter the year that you were born as a born:\n");
        scanf("%d", &year);
    printf("You were born on: %d/%d/%d\n", day, month, year);
            
    return 0;
  }
