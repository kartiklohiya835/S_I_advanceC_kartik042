#include <stdio.h>

int main()
{
    int player1, player2;
    int p1Score = 0, p2Score = 0, draw = 0, match = 0;
    char ch;

    do
    {
           printf("\t\t\t====================================\t\t\t\n");
           printf("\t\t\t   ROCK PAPER SCISSORS GAME\t\t\t\t\n");
           printf("\t\t\t=====================================\t\t\t\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");

        printf("\nPlayer 1 Enter Choice: ");
        scanf("%d", &player1);

        printf("\nPlayer 2 Enter Choice: ");
        scanf("%d", &player2);

        if(player1 < 1 || player1 > 3 || player2 < 1 || player2 > 3)
        {
            printf("\nInvalid Choice! Try Again.\n");
        }
        else
        {
            match++;

            printf("\nPlayer 1 Chose: ");
            if(player1 == 1)
                printf("Rock");
            else if(player1 == 2)
                printf("Paper");
            else
                printf("Scissors");


            printf("\nPlayer 2 Chose: ");
            if(player2 == 1)
                printf("Rock");
            else if(player2 == 2)
                printf("Paper");
            else
                printf("Scissors");
            printf("\n");


            if(player1 == player2)
            {
                printf("\nResult : Match Draw!\n");
                draw++;
            }
            else if((player1 == 1 && player2 == 3) ||
                    (player1 == 2 && player2 == 1) ||
                    (player1 == 3 && player2 == 2))
            {
                printf("\nResult : Player 1 Wins\n");
                p1Score++;
            }
            else
            {
                printf("\nResult : Player 2 Wins!\n");
                p2Score++;
            }

            printf("\n--------- SCORE BOARD ---------\n");
            printf("Matches Played : %d\n", match);
            printf("Player 1 Score : %d\n", p1Score);
            printf("Player 2 Score : %d\n", p2Score);
            printf("Draw Matches   : %d\n", draw);
            printf("-------------------------------\n");
        }

        printf("\nPlay Again= y,n: ");
        scanf(" %c", &ch);

    } while(ch == 'Y' || ch == 'y');

    printf("\n====================================\n");
    printf("          FINAL RESULT\n");
    printf("====================================\n");
    printf("Total Matches : %d\n", match);
    printf("Player 1 Score: %d\n", p1Score);
    printf("Player 2 Score: %d\n", p2Score);
    printf("Draw Matches  : %d\n", draw);

    if(p1Score > p2Score)
        printf("\nOverall Winner : Player 1\n");
    else if(p2Score > p1Score)
        printf("\nOverall Winner : Player 2\n");
    else
        printf("\nOverall Result : Match Draw\n");

    printf("\nThank You For Playing!\n");

    return 0;
}