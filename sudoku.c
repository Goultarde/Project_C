#include "includes.h"
int main(int argc, char **argv){
    /* 
    je veut alouer 9 case et 9 colonnes
    Il faudra a la fin libérer l'espace alouer
    */ 
    int **board;
    board  = (int **)malloc(9 * sizeof(int *));
    int i;
    for (i = 0; i<9; i++){
        board[i] = (int *)malloc(9*sizeof(int));
    }
    int x,y,z=0;
    for(x = 0; x<9;i++){
        z++;
        for(y = 0; y<9;){
            board[x][y] = z;
        }
    }
    // [[1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9]
    // ]
    char buff[81+8];
    // int fd = open("sudoku.txt", O_RDONLY);
    int fd = open(argv[argc-1], O_RDONLY);
    read(fd, buff,81+8);
    buff[89] = '\0';
    printf("%s\n", buff);

    // printf("%d", board);
    i=0;
    while(i<9){
        free(board[i]);
        i++;
    }
    
    free(board);
}   