#include <stdio.h>
void printboard();
int checkwin();
char board[] = {'0' , '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9'};
    
int main() {
    int player = 1, input , status = -1;
    printboard();
    while(status == -1){
        player = (player % 2== 0)? 2 : 1 ;
        char mark = (player ==1)? 'X' : 'O';
        printf("please enter number for player %d:" , player);
        scanf("%d" ,&input );
        if(input <1 || input > 9){
            printf("Invalid Input");}
        board[input] = mark;
        printboard();
        int result = checkwin();

        if(result ==1){
            printf("player %d is the winner" , player);
            return 0;
        }else if(result ==0){
            printf("DRAW!!");
            return 0;
        }
        player++;
    
    }
    return 0;
}
void printboard() {
    printf("###TIC TAC TOE### \n\n");
    printf("    |    |   \n");
    printf(" %c  |  %c |  %c \n", board[1] , board[2] ,board[3]);
    printf("____|____|____\n");
    printf("    |    |   \n");
    printf(" %c  |  %c |  %c \n" , board[4] , board[5] , board[6]);
    printf("____|____|____\n");
    printf("    |    |   \n");
    printf(" %c  |  %c |  %c  \n", board[7] , board[8], board[9]);
    printf("    |    |   \n");
    printf("\n\n");
}
int checkwin(){
    if(board[1] == board[2] && board[2] == board[3]){
        return 1;
    }
    if(board[1] == board[4] && board[4] == board[7]){
        return 1;
    }
    if(board[1] == board[5] && board[5] == board[9]){
        return 1;
    }
    if(board[2] == board[5] && board[5] == board[8]){
        return 1;
    }
    if(board[3] == board[6] && board[6] == board[9]){
        return 1;
    }
    if(board[3] == board[5] && board[5] == board[7]){
        return 1;
    }
    if(board[4] == board[5] && board[5] == board[7]){
        return 1;
    }
    if(board[7] == board[8] && board[8] == board[9]){
        return 1;
    }
    int count = 0;
    for(int i = 1; i<=9 ;i++){
        if(board[i] == 'X' || board[i] == 'O'){
            count++;
        }
    }
    if(count == 9){
        return 0;
    }

    return -1;
}