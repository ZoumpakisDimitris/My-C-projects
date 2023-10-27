#include <stdio.h>
int main(){
    int grade1=0;
    int grade2=0;
    int grade3=0;
    int grade4=0;
    float grdAverage=0;

    printf("Enter the first grade: "); // asking the user to give the first grade
        scanf("%d", &grade1); // reading the first grade
    printf("Enter the second grade: "); // asking the user to give the second grade
        scanf("%d", &grade2); // reading the second grade
    printf("Enter the third grade: "); // asking the user to give the third grade
        scanf("%d", &grade3); // reading the third grade
    printf("Enter the fourth grade: "); // asking the user to give the fourth grade
        scanf("%d", &grade4); // reading the fourth grade

    grdAverage=(grade1+grade2+grade3+grade4)/4; // calculating the average of the four grades
        printf("The average of the 4 students is: %f", grdAverage); // displaying the average of the four grades

    return 0;
}