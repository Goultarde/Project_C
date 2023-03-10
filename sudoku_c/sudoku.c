#include "../includes.h"

int try_line(int **bord, int line, int value){
    /*Cette fonction va permetre de vérifier les lignes du sudoku*/
    int i = 0;
    while (i<9){
        if (bord[line][i] == value){
            return false;
        }
        i++;
    }
    return 1;

}

int try_col(int **bord, int col, int value){
    /*Cette fonction va permetre de vérifier les colone du sudoku*/
    int i = 0;
    while (i<9){
        if (bord[i][col] == value){
            return false;
        }
        i++;
    }
    return true;

}

int try_case(int **bord, int test, int value){
    /*Cette fonction va permetre de vérifier les case du sudoku*/
    if (try_col(bord,test,value)){
        if(try_line(bord,test,value)){

        }
    }
    return false;

}

int main(int argc, char **argv){
    /* 
    j'aloue de l'espace dans la mémoire pour 9 case et 9 colonnes
    Je remplie le tableau via un fichier txt puis je l'affiche
    A la fin je libère l'espace alouer
    */ 
    int **board;
    board  = (int **)malloc(9 * sizeof(int *));
    int i = 0;
    int x = 0;
    int y = 0;

    while (i<9)
    {
        board[i] = (int *)malloc(9*sizeof(int));
        i++;
    }


    char buff[81+8];
    int fd = open(argv [argc-1], O_RDONLY);
    read(fd, buff,81+8);
    buff[89] = '\0';
    // printf("%s\n", buff);
    i=0;
    while (i<81){
        while (x<9){
            while (y<9)
            {
                if(buff[i] != 10){
                    board[x][y]=buff[i]-48;
                    printf("%d", board[x][y]);
                    y++;
                    i++;

                }
                else{
                    i++;
                }
            }
            x++;
            y = 0;
            printf("\n");
        }
        x = 0;
        
        
    }


    // printf("%d", board);
    i=0;
    while(i<9){
        free(board[i]);
        i++;
    }
    
    free(board);
}   