#include <stdio.h>
#include <string.h>

typedef struct upgradedquizgame
{
    char questions[200];
    char options[100];
    char answers[50];
} Quiz;

int main()
{

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

    if (starting_choice == 1)
    {
        printf("\n");
        printf("|=============================|\n");
        printf("|      CHOOSE DIFICULTY       |\n");
        printf("|-----------------------------|\n");
        printf("| 1. Easy ( 5 Questions )     |\n");
        printf("| 2. Medium ( 10 Questions )  |\n");
        printf("| 3. Hard ( 15 Questions )    |\n");
        printf("|=============================|\n");

        int dificulty_choice;
        printf("\nEnter your choice = ");
        scanf("%d", &dificulty_choice);

        if (dificulty_choice == 1)
        {
            int max_questions = 5;
            Quiz game[5];

            strcpy(game[0].questions, "Which planet is known as the Red Planet?");
            strcpy(game[1].questions, "How many continents are there on Earth?");
            strcpy(game[2].questions, "Which company made the iPhone?");
            strcpy(game[3].questions, "In which anime does the main character want to become the 'King of Pirates'?");
            strcpy(game[4].questions, "How many players are on a football (soccer) team on the field?");

            strcpy(game[0].options, "A) Jupiter  B) Venus  C) Mars  D) Saturn");
            strcpy(game[1].options, "A) 5  B) 6  C) 8  D) 7");
            strcpy(game[2].options, "A) Samsung  B) Apple  C) Sony  D) Nokia");
            strcpy(game[3].options, "A) Naruto  B) Bleach  C) One Piece  D) Dragon Ball Z");
            strcpy(game[4].options, "A) 10  B) 12  C) 11  D) 9");

            strcpy(game[0].answers, "C");
            strcpy(game[1].answers, "D");
            strcpy(game[2].answers, "B");
            strcpy(game[3].answers, "C");
            strcpy(game[4].answers, "C");
        }

        if (dificulty_choice == 2)
        {
            int max_questions = 10;
            Quiz game[10];

            strcpy(game[0].questions, "What is the capital city of Australia?");
            strcpy(game[1].questions, "Which web series features a chemistry teacher who becomes a drug lord?");
            strcpy(game[2].questions, "What does 'GDP' stand for in economics?");
            strcpy(game[3].questions, "Which country is the largest by land area?");
            strcpy(game[4].questions, "In Attack on Titan, what is the name of the main protagonist?");
            strcpy(game[5].questions, "Which gas do plants absorb from the atmosphere for photosynthesis?");
            strcpy(game[6].questions, "Which company developed the Android operating system?");
            strcpy(game[7].questions, "Which sport is associated with the term 'Grand Slam'?");
            strcpy(game[8].questions, "What is the currency of Japan?");
            strcpy(game[9].questions, "In Naruto, what is the name of the Nine-Tailed Fox sealed inside Naruto?");

            strcpy(game[0].options, "A) Sydney  B) Melbourne  C) Brisbane  D) Canberra");
            strcpy(game[1].options, "A) Ozark  B) Breaking Bad  C) Narcos  D) Peaky Blinders");
            strcpy(game[2].options, "A) General Domestic Product  B) Gross Demand Price  C) Gross Domestic Product  D) Global Development Plan");
            strcpy(game[3].options, "A) USA  B) China  C) Canada  D) Russia");
            strcpy(game[4].options, "A) Levi Ackerman  B) Armin Arlert  C) Eren Yeager  D) Zeke Yeager");
            strcpy(game[5].options, "A) Oxygen  B) Carbon Dioxide  C) Nitrogen  D) Hydrogen");
            strcpy(game[6].options, "A) Apple  B) Microsoft  C) Google  D) Samsung");
            strcpy(game[7].options, "A) Football  B) Tennis  C) Cricket  D) Basketball");
            strcpy(game[8].options, "A) Won  B) Yuan  C) Yen  D) Ringgit");
            strcpy(game[9].options, "A) Shukaku  B) Kurama  C) Gyuki  D) Matatabi");
            

            strcpy(game[0].answers, "D");
            strcpy(game[1].answers, "B");
            strcpy(game[2].answers, "C");
            strcpy(game[3].answers, "D");
            strcpy(game[4].answers, "C");
            strcpy(game[5].answers, "B");
            strcpy(game[6].answers, "C");
            strcpy(game[7].answers, "B");
            strcpy(game[8].answers, "C");
            strcpy(game[9].answers, "B");
        }
    }

    return 0;
}
