#include <stdio.h>

int main(){
    float no_1;         /* Declaring 4 variables*/
    float no_2;
    float prod;
    float div;
        
        printf("Enter the first number: "); // asking the user to give the first number
            scanf("%f", &no_1); // reading the first number
        printf("Enter the second number: ");   // asking the user to give the second number
            scanf("%f", &no_2); // reading the second number
        
                prod=no_1*no_2; // calculating the multiplication of the two variables
                div=no_2/no_1;  // calculating the division of the two variables
        
            printf("Operation:  %f * %f = %f" , no_1,no_2, prod); // displaying the operation and the result of the multiplication
            
        printf("\nOperation:  %f / %f = %f" , no_2,no_1, div);   // displaying the operation and the result of the division
    
    return 0;

}