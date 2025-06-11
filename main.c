#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int Move, ComputerMove, UserScore = 0, CompScore = 0, i = 1;

    srand(time(0));

    printf("\n\t\t\t   Welcome to Rock-Paper-Scissors!");
    printf("\n\t\t\t   ===============================\n\n");
    printf("\nRules:");
    printf("\n1. You will play against the computer.");
    printf("\n2. Enter 1 for Rock, 2 for Paper, 3 for Scissors.");
    printf("\n3. First to 3 points wins the game!");
    printf("\nLet's Begin!\n");

    do {
        ComputerMove = rand() % 3;
        printf("\nRound %d:\n", i);
        printf("\nChoose your move:");
        printf("\n[1] Rock");
        printf("\n[2] Paper");
        printf("\n[3] Scissors");
        printf("\n[4] Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &Move);

        switch (Move) {
            case 1:
            case 2:
            case 3:
                if (Move == 1)
                    printf("You chose: Rock\n");
                else if (Move == 2)
                    printf("You chose: Paper\n");
                else
                    printf("You chose: Scissors\n");

                if (ComputerMove == 0)
                    printf("Computer chose: Rock\n");
                else if (ComputerMove == 1)
                    printf("Computer chose: Paper\n");
                else
                    printf("Computer chose: Scissors\n");

                if (Move == ComputerMove + 1)
                    printf("It's a DRAW! No points awarded.\n");
                else if ((Move == 1 && ComputerMove == 1) || (Move == 2 && ComputerMove == 2) || (Move == 3 && ComputerMove == 0)) {
                    printf("You LOST this round. Try again!\n");
                    CompScore++;
                } else {
                    printf("You WIN this round!\n");
                    UserScore++;
                }

                if (UserScore == 3 || CompScore == 3) {
                    printf("\n\n----------------------------");
                    printf("\n-: GAME OVER! FINAL SCORE :-");
                    printf("\n----------------------------");
                    printf("\n   You [%d] - [%d] Computer", UserScore, CompScore);
                    printf("\n----------------------------\n");
                    if (UserScore > CompScore)
                        printf("YOU WON THE GAME!\n");
                    else
                        printf("COMPUTER WINS! BETTER LUCK NEXT TIME.\n");
                    printf("Choose [4] to exit the game.\n");
                } else {
                    i++;
                }
                break;

            case 4:
                printf("Thanks for playing! See you next time.\n");
                break;

            default:
                printf("Invalid choice! Please enter 1, 2, or 3.\n");
                break;
        }
    } while (Move != 4);

    return 0;
}
