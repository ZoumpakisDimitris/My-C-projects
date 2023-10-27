#include <stdio.h>

int main(){
    int var_1; // declaring two variables
    int var_2;
    int sum; // calculating the sum of the two variables

    printf("Give the first number: "); // asking the user to give the first number
        scanf("%d", &var_1); // reading the first number
    printf("Give the second number: "); // asking the user to give the second number
        scanf("%d", &var_2); // reading the second number
    sum=var_1+var_2; //  the sum of the two variables
    printf("Operation:  %d + %d = %d" , var_1,var_2, sum); // displaying the operation and the result

    
    return 0;
}