#include <stdio.h>
#include <string.h>


int main() {
    
    int starting_choice;

    printf("\n");
    printf("|================================|\n");
    printf("|    WELCOME TO THE QUIZ GAME    |\n");
    printf("|--------------------------------|\n");
    printf("| 1. Start the game              |\n");
    printf("| 2. Rules                       |\n");
    printf("|================================|\n");

    printf("\nEnter your choice = ");  
    scanf("%d", &starting_choice);

    if (starting_choice = 1)
    {
        printf("|=============================|\n");
        printf("|      CHOOSE DIFICULTY       |\n");
        printf("|-----------------------------|\n");
        printf("| 1. Easy ( 5 Questions )     |\n");
        printf("| 2. Medium ( 10 Questions )  |\n");
        printf("| 3. Hard ( 15 Questions )    |\n");
        printf("|=============================|\n");
    }
    
    
    return 0;
}
