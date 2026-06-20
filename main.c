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

        else if (dificulty_choice == 2)
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

        else if (dificulty_choice == 3)
        {
            int max_questions = 15;
            Quiz game[15];

            strcpy(game[0].questions, "Which country was the first to give women the right to vote?");
            strcpy(game[1].questions, "What is the term for the interest rate at which central banks lend money to commercial banks?");
            strcpy(game[2].questions, "In 'Money Heist,' what is the real name of 'The Professor'?");
            strcpy(game[3].questions, "Which ocean is the deepest in the world?");
            strcpy(game[4].questions, "Which player has won the most Ballon d'Or awards as of 2024?");
            strcpy(game[5].questions, "Which Indian state has the longest coastline?");
            strcpy(game[6].questions, "What does 'blockchain' primarily provide in cryptocurrency systems?");
            strcpy(game[7].questions, "In 'Death Note,' what is the human name of the detective known as 'L'?");
            strcpy(game[8].questions, "Which country has won the most FIFA World Cup titles?");
            strcpy(game[9].questions, "What is the smallest country in the world by land area?");
            strcpy(game[10].questions, "Which company's stock ticker symbol is 'TSLA'?");
            strcpy(game[11].questions, "In 'Demon Slayer,' what is the name of Tanjiro's signature breathing technique?");
            strcpy(game[12].questions, "Which treaty officially ended World War I?");
            strcpy(game[13].questions, "What does 'API' stand for in technology?");
            strcpy(game[14].questions, "In chess, what is the only piece that can jump over other pieces?");

            strcpy(game[0].options, "A) USA  B) New Zealand  C) UK  D) Sweden");
            strcpy(game[1].options, "A) Inflation Rate  B) Exchange Rate  C) Repo Rate  D) Prime Rate");
            strcpy(game[2].options, "A) Andres de Fonollosa  B) Sergio Marquina  C) Alvaro Morte  D) Raul Arevalo");
            strcpy(game[3].options, "A) Atlantic Ocean  B) Indian Ocean  C) Arctic Ocean  D) Pacific Ocean");
            strcpy(game[4].options, "A) Cristiano Ronaldo  B) Zinedine Zidane  C) Lionel Messi  D) Ronaldinho");
            strcpy(game[5].options, "A) Kerala  B) Tamil Nadu  C) Gujarat  D) Maharashtra");
            strcpy(game[6].options, "A) Faster internet  B) Decentralized, tamper-proof ledger  C) Free transactions  D) Government control");
            strcpy(game[7].options, "A) Light Yagami  B) Near  C) L Lawliet  D) Mello");
            strcpy(game[8].options, "A) Germany  B) Argentina  C) Brazil  D) Italy");
            strcpy(game[9].options, "A) Monaco  B) San Marino  C) Vatican City  D) Liechtenstein");
            strcpy(game[10].options, "A) Toyota  B) Tesla  C) Tata Motors  D) Texas Instruments");
            strcpy(game[11].options, "A) Thunder Breathing  B) Water Breathing  C) Flame Breathing  D) Wind Breathing");
            strcpy(game[12].options, "A) Treaty of Paris  B) Treaty of Versailles  C) Treaty of Vienna  D) Treaty of Lausanne");
            strcpy(game[13].options, "A) Application Programming Interface  B) Advanced Programming Index  C) Automated Process Integration  D) Application Process Identifier");
            strcpy(game[14].options, "A) Bishop  B) Rook  C) Knight  D) Queen");

            strcpy(game[0].answers, "B");
            strcpy(game[1].answers, "C");
            strcpy(game[2].answers, "B");
            strcpy(game[3].answers, "D");
            strcpy(game[4].answers, "C");
            strcpy(game[5].answers, "C");
            strcpy(game[6].answers, "B");
            strcpy(game[7].answers, "C");
            strcpy(game[8].answers, "C");
            strcpy(game[9].answers, "C");
            strcpy(game[10].answers, "B");
            strcpy(game[11].answers, "B");
            strcpy(game[12].answers, "B");
            strcpy(game[13].answers, "A");
            strcpy(game[14].answers, "C");
        }

        else
        {
            printf("\n--- Invalid choice ! Defaulting to Easy mode ---\n");
            
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
    }

    return 0;
}
