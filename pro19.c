#include <stdio.h>
int main(){
        int varCurrentYear = 0;
        int varBirthYear = 0;
        int age = 0;
        printf("Please enter the current year: "); // asking the user to enter the current year
                scanf("%d", &varCurrentYear); // displaying the current year
        printf("\nPlease enter your year of birth: "); // asking the user to enter his birth year
                scanf("%d", &varBirthYear); // displaying the birth year
            age=varCurrentYear-varBirthYear; // calculating the age
        printf("\nResult: you are %d years old", age); // displaying the result

    return 0;
}
