#include "../includes.h"

int verificaiton_horizontal(int **bord, int line, int nb_line){
    int i;
    while (i<8){
        if(bord[i][line] == nb_line){
            return 1;
        }
        i++;
    }
    return 0;
}

#include "../includes.h"

int verificaiton_verticale(int **bord, int line, int nb_line){
    int i;
    while (i<8){
        if(bord[line][i] == nb_line){
            return 1;
        }
        i++;
    }
    return 0;
}


int main(int argc, char **argv){
    /* 
    je veut alouer 9 case et 9 colonnes
    Il faudra a la fin libérer l'espace alouer
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
    // int x,y,z=0;
    // for(x = 0; x<9;i++){
    //     z++;
    //     for(y = 0; y<9;){
    //         board[x][y] = z;
    //     }
    // }
    // [[1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9],
    // [1,2,3,4,5,6,7,8,9]
    // ];
    char buff[81+8];
    int fd = open(argv[argc-1], O_RDONLY);
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