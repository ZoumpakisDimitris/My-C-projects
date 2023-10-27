#include <stdio.h>
int main(){
    char initial1='D'; 
    char initial2='Z'; // declaring the initials
    char initial3='K';

    printf("First name character is: %c", initial1); 
    printf("\nFather's name character is: %c", initial3); // displaying the initials
    printf("\nLast name character is: %c", initial2);
    printf("\n");
    printf("\nSo: %c + %c + %c makes: %c%c%c",initial1, initial3, initial2, initial1, initial3, initial2); // displaying the initials


    return 0;
}