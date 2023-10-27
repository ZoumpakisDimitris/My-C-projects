#include <stdio.h>
int main(){
    char initial1=0;
    char initial2=0;
    char initial3=0;

        printf("Please enter your first name initial: "); // asking the user to enter his first name initial
                scanf(" %c", &initial1);
        
        printf("\nPlease enter your father's name initial: "); // asking the user to enter his father's name initial
                scanf(" %c", &initial3); // displaying the father's name initial
        
        printf("\nPlease enter your last name initial: "); // asking the user to enter his last name initial
                scanf(" %c", &initial2); // displaying the last name initial
    
    printf("\n");
    printf("So: %c + %c + %c makes: %c%c%c",initial1, initial3, initial2, initial1, initial3, initial2); // displaying the initials


    return 0;
}