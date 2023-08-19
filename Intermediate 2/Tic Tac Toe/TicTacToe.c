#include <stdio.h>
#include <stdlib.h>
#define TEST_MODE       0

struct player_t
{
    char sign;
    int score;
    char name[50];
};

typedef struct player_t player;

void initialiseBoard(void);
player* initialisePlayer(player* playerPtr, int numOfPlayer);
void displayBoard(void);
void displayInstrucions(void);
void updateBoard(player* playerPtr, int* playCountPtr);
void checkForWinner(player* player1Ptr);
int checkForDue(void);
void printScore(player* player1Ptr, player* player2Ptr);
char board[3][3];

int main()
{
    int playCount = 0;
    int* playCountPtr = (int*)malloc(sizeof(int));
    playCountPtr = &playCount;
    int scorePlayer1;
    int scorePlayer2;
    player player1;
    player player2;
    player* player1Ptr = (player*)malloc(sizeof(player));
    player* player2Ptr = (player*)malloc(sizeof(player));

    player1Ptr = &player1;
    player2Ptr = &player2;

    printf("\t------- Tic Tac Toe -------\n\n\n");
    player1Ptr = initialisePlayer(player1Ptr, 1);
    player2Ptr = initialisePlayer(player2Ptr, 2);

    while(1==1)
    {   
        initialiseBoard();
        displayInstrucions();
        playCount = 0;
        
        printf("Enter any key to play, otherwise enter -1: ");
        fflush(stdin);
        scanf("%d", &playCount);
        if(playCount == -1)
        {
            break;
        }
        else
        {
            playCount = 0;
            // Starts the main loop of the game :)
            while((*playCountPtr) <= 9)
            {           
                if((*playCountPtr)%2 == 0)
                {
                    updateBoard(player1Ptr, playCountPtr);
                }
                else
                {
                    updateBoard(player2Ptr, playCountPtr);
                }

                displayBoard();
                
                // Need to check if someone has won.
                scorePlayer1 = player1Ptr->score;
                scorePlayer2 = player2Ptr->score;

                checkForWinner(player1Ptr);
                checkForWinner(player2Ptr);

                if(scorePlayer1 < player1Ptr->score && scorePlayer2 == player2Ptr->score)
                {
                    printf("\n\nCONGRATULATIONS %s\nYou WON the Match! :)\n", player1Ptr->name);
                    printScore(player1Ptr, player2Ptr);
                    break;
                }
                else if(scorePlayer2 < player2Ptr->score && scorePlayer1 == player1Ptr->score)
                {
                    printf("\n\nCONGRATULATIONS %s\nYou WON the Match! :)\n", player2Ptr->name);
                    printScore(player1Ptr, player2Ptr);
                    break;
                }
                else if(scorePlayer1 == player1Ptr->score && scorePlayer1 == player1Ptr->score)
                {
                    if(checkForDue() == 1)
                    {
                        printf("\n\nDUE! No change in Score.\nGame Starts Again.\n");
                        printScore(player1Ptr, player2Ptr);
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                else if(scorePlayer1 > player1Ptr->score && scorePlayer1 > player1Ptr->score)
                {
                    printf("\nSomthing went terribly wrong.\nFor somereason both players have won?\nCODING SUCKS\n");
                    break;
                }
                else if(scorePlayer1 < player1Ptr->score && scorePlayer1 < player1Ptr->score)
                {
                    printf("\nSomthing went terribly wrong.\nFor somereason both scores decreased?\nCODING SUCKS\n");
                    break;
                }
                else
                {
                    printf("\nI am not sure what happened.\n");
                }
            }
        }
    }
    free(playCountPtr);
    free(player1Ptr);
    free(player2Ptr); 

    return 0;
}

void initialiseBoard(void)
{
    // Initialising the 2D array with empty characters.
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            board[i][j] = ' ';
        }
    }

    for(int i = 0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(j<2)
            {
                printf(" %c |", board[i][j]);
            }
            else
            {
                printf(" %c", board[i][j]);
            }
        }
        if(i<2)
        {
            printf("\n-----------\n");
        }
        else
        {
            printf("\n\n");
        }
    }
}

player* initialisePlayer(player* playerPtr, int numOfPlayer)
{    
    printf("\nPlease enter Player%d name: ", numOfPlayer);
    fflush(stdin);
    scanf("%s", playerPtr->name);

    printf("\nPlease chose a sign to use on the board (X, O, etc.): ");
    fflush(stdin);
    playerPtr->sign = getchar();

    playerPtr->score = 0;
    
    return playerPtr;
}

void displayBoard(void)
{
    printf("\n\n");
    for(int i = 0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(j<2)
            {
                printf(" %c |", board[i][j]);
            }
            else
            {
                printf(" %c", board[i][j]);
            }
        }
        if(i<2)
        {
            printf("\n-----------\n");
        }
        else
        {
            printf("\n\n");
        }
    }
}

void displayInstrucions(void)
{
    
    printf("\nTo insert your sign simply enter the number of where you want to insert it.\n");
    printf("\nIndexes for cells' numbers are displayed below:\n\n");

    int numbers[3][3] = {{7,8,9},{4,5,6},{1,2,3}};      //Otherwise keyboard is upside down.
    for(int i = 0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(j<2)
            {
                printf(" %d |", numbers[i][j]);
            }
            else
            {
                printf(" %d", numbers[i][j]);
            }
        }
        if(i<2)
        {
            printf("\n-----------\n");
        }
        else
        {
            printf("\n\n");
        }
    }
}

void updateBoard(player* playerPtr, int* playCountPtr)
{
    int choice;         // If declared as a short could not modify the value with scanf even when %h was used.
    printf("\n%s [%c] enter your choice: ", playerPtr->name, playerPtr->sign);
    fflush(stdin);
    scanf("%d", &choice);

    if(choice <= 0)
    {
        printf("\nYou cannot enter a value outside 1-9.\n");
        return;
    }
    else if(choice <= 3)
    {
        if(board[2][choice-1] == ' ')
        {
            board[2][choice-1] = playerPtr->sign;  // Assign the chosen sign to board
            (*playCountPtr)++;                       // Increase integer to get the other players turn
            return;
        }
        else
        {
            printf("\nYou cannot insert a value here.\nCell already filled by %c", board[2][choice-1]);
            return;
        }
    }
    else if ((choice > 3) && (choice <= 6))
    {
        if(board[1][choice-4] == ' ')
        {
            board[1][choice-4] = playerPtr->sign;
            (*playCountPtr)++;
            return;
        }
        else
        {
            printf("\nYou cannot insert a value here.\nCell already filled by %c", board[1][choice-4]);
            return;
        }
    }
    else if ((choice > 6) && (choice <= 9))
    {
        if(board[0][choice-7])
        {
            board[0][choice-7] = playerPtr->sign;
            (*playCountPtr)++;
            return;            
        }
        else
        {
            printf("\nYou cannot insert a value here.\nCell already filled by %c", board[0][choice-7]);
            return;
        }
    }
    else
    {
        printf("\nInvalid Input!!! You can enter numbers between 1-9\n");
        return;
    }
}

void checkForWinner(player* playerPtr)
{   
    // Checking for all 8 combinations.
    if(((board[0][0] == playerPtr->sign) && (board[0][1] == playerPtr->sign) && (board[0][2] == playerPtr->sign))
    || ((board[1][0] == playerPtr->sign) && (board[1][1] == playerPtr->sign) && (board[1][2] == playerPtr->sign))
    || ((board[2][0] == playerPtr->sign) && (board[2][1] == playerPtr->sign) && (board[2][2] == playerPtr->sign))
    || ((board[0][0] == playerPtr->sign) && (board[1][0] == playerPtr->sign) && (board[2][0] == playerPtr->sign))
    || ((board[0][1] == playerPtr->sign) && (board[1][1] == playerPtr->sign) && (board[2][1] == playerPtr->sign))
    || ((board[0][2] == playerPtr->sign) && (board[1][2] == playerPtr->sign) && (board[2][2] == playerPtr->sign))
    || ((board[0][0] == playerPtr->sign) && (board[1][1] == playerPtr->sign) && (board[2][2] == playerPtr->sign))
    || ((board[0][2] == playerPtr->sign) && (board[1][1] == playerPtr->sign) && (board[2][0] == playerPtr->sign)))
    {
        playerPtr->score++;
    }
}

int checkForDue(void)
{
    int due = 0;
    int i;
    int j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(board[i][j] != ' ')
            {
                due++;
            }
        }
    }

    if(TEST_MODE == 1)
    {
        printf("\nEmpty spaces found: %d\n", due);
    }

    if(due == 9)
    {
        return 1;   // Due as none won and all cells are full.
    }
    else
    {
        return 0;
    }

}

void printScore(player *player1Ptr, player *player2Ptr)
{
    printf("\n+++++++++++++++++++++++++\n");
    printf("%s [Symbol = %c] Score = %d\n", player1Ptr->name, player1Ptr->sign, player1Ptr->score);
    printf("%s [Symbol = %c] Score = %d\n", player2Ptr->name, player2Ptr->sign, player2Ptr->score);
    printf("+++++++++++++++++++++++++\n\n");
    return;
}

