#include <stdbool.h>    /* C99 only */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *generateBoard();
void printLadders();
void printSnake();
void printBoard(int (*board)[10]);
int rollDice();
int checkForSnakeOrLadder(int position);
int movePlayer(int playerPos);

int *generateBoard(){
    static int board[10][10] = {
        {100, 99, 98, 97, 96, 95, 94, 93, 92, 91},
        {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
        {80, 79, 78, 77, 76, 75, 74, 73, 72, 71},
        {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
        {60, 59, 58, 57, 56, 55, 54, 53, 52, 51},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
        {40, 39, 38, 37, 36, 35, 34, 33, 32, 31},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
        {20, 19, 18, 17, 16, 15, 14, 13, 12, 11},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    };
    return board;
}

void printLadders(){
    printf("Ladders\n");
    printf("54-->88\n"
           "41-->79\n"
           "22-->58\n"
           "14-->55\n"
           "12-->50\n"
           "4-->56\n"
           );
}

void printSnake(){
    printf("Snakes\n");
    printf("88-->54\n"
           "79-->41\n"
           "58-->22\n"
           "55-->14\n"
           "50-->12\n"
           "37-->3\n"
           );
}

void printBoard(int (*board)[10]){
    int i, j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("%d\t",*(*(board+i)+j));
        }
        printf("\n");
    }

    printLadders();
    printf("\n");
    printSnake();
}

int rollDice(){
    srand(time(NULL));
    int r = ( rand() % 6 ) + 1;
    return r;
}

int checkForSnakeOrLadder(int position){
    switch(position){
        //For snakes
        case 88:
            return 54;  break;
        case 79:
            return 41;  break;
        case 58:
            return 22;  break;
        case 55:
            return 14;  break;
        case 50:
            return 12;   break;
        case 37:
            return 3;   break;
        //For ladders
        case 54:
            return 88;  break;
        case 41:
            return 79;  break;
        case 22:
            return 58;  break;
        case 14:
            return 55;  break;
        case 12:
            return 50;  break;
        case 4:
            return 56;  break;
        default:
            return position;
    }
}

int movePlayer(int playerPos){
    int input, dice;
    printf("Enter 1 to roll dice\n");
    scanf("%d", &input);
    dice = rollDice();
    playerPos += dice;
    playerPos = checkForSnakeOrLadder(playerPos);
    printf("Dice: %d\n", dice);
    printf("Player 1 at Position %d\n", playerPos);
    return playerPos;
}

int main(){
    int numPlayers = 2, player1Pos = 0, player2Pos = 0, dice, turn = 1;
    int (*board)[10], i, j;
    board = generateBoard();
    printBoard(board);
    printf("Game start!\n");
    while(player1Pos != 100 || player2Pos != 100){
        if(turn==1){
            printf("Turn of player 1 \n");
            player1Pos = movePlayer(player1Pos);
            turn = 2;
        }else if(turn == 2){
            printf("Turn of player 2 \n");
            player2Pos = movePlayer(player2Pos);
            turn = 1;
        }

        if(player1Pos>=100){
            printf("Player1 has won!");
            break;
        }else if(player2Pos>=100){
            printf("Player2 has won!");
            break;
        }
    }
    return 0;
}



