#include <stdio.h>

int main(){
    float no_1=3.14159; // declaring and initializing two variables
    float no_2=9.81;
    float prod=no_1*no_2; // calculating the multiplication of the two variables
    float div=no_2/no_1; // calculating the division of the two variables
        printf("Operation:  %f * %f = %f" , no_1,no_2, prod); // displaying the operation and the result of the multiplication
                printf("\nOperation:  %f / %f = %f" , no_2,no_1, div); // displaying the operation and the result of the division
    
    return 0;

}